#pragma once

#include <vector>

// 假设：哈希表格中的元素唯一

enum State
{
	EMPTY, EXIST, DELETE
};

template<class T>
struct Elem
{
	T _value;
	State _state;
};


template<class T, bool IsLine = true>
class HashTable
{
public:
	HashTable(size_t capacity = 10)
		: _ht(capacity)
		, _size(0)
	{
		for (auto& e : _ht)
			e._state = EMPTY;
	}

	bool Insert(const T& value)
	{
		// 0. 检测是否需要扩容
		CheckCapacity();
		// 1. 通过哈希函数计算元素在哈希表中的存储位置
		size_t hashAddr = HashFunc(value);
		int i = 0;
		// 2. 检测该位置是否可以直接插入元素
		// 发生哈希冲突
		while (EMPTY != _ht[hashAddr]._state)
		{
			if (EXIST == _ht[hashAddr]._state &&
				value == _ht[hashAddr]._value)
			{
				return false;
			}

			// 使用线性探测解决
			i++;
			if (IsLine)
			{
				++hashAddr;
				if (hashAddr == _ht.capacity())
					hashAddr = 0;
			}
			else
			{
				hashAddr = hashAddr + 2 * i + 1;
				hashAddr %= _ht.capacity();
			}


		}

		// 插入元素
		_ht[hashAddr]._value = value;
		_ht[hashAddr]._state = EXIST;
		++_size;
		return true;
	}

	int Find(const T& value)
	{
		size_t hashAddr = HashFunc(value);
		int i = 0;
		while (EMPTY != _ht[hashAddr]._state)
		{
			if (EXIST == _ht[hashAddr]._state &&
				value == _ht[hashAddr]._value)
			{
				return hashAddr;
			}

			i++;
			if (IsLine)
			{
				++hashAddr;
				if (hashAddr == _ht.capacity())
					hashAddr = 0;
			}
			else
			{
				hashAddr = hashAddr + 2 * i + 1;
				hashAddr %= _ht.capacity();
			}
		}

		return -1;
	}

	bool Erase(const T& value)
	{
		int pos = Find(value);
		if (-1 != pos)
		{
			_ht[pos]._state = DELETE;
			_size--;
			return true;
		}

		return false;
	}

	void Swap(HashTable<T>& ht)
	{
		_ht.swap(ht._ht);
		swap(_size, ht._size);
	}

private:
	size_t HashFunc(const T& value)
	{
		return value % _ht.capacity();
	}

	void CheckCapacity()
	{
		// 哈希负载因子：有效元素与容量的比率
		if (_size * 10 / _ht.capacity() >= 7)
		{
			HashTable<T> newHT(_ht.capacity() * 2);

			// 将原哈希表中状态为存在的元素插入到新哈希表中
			for (size_t i = 0; i < _ht.capacity(); ++i)
			{
				if (EXIST == _ht[i]._state)
					newHT.Insert(_ht[i]._value);
			}

			Swap(newHT);
		}
	}

private:
	std::vector<Elem<T>> _ht;
	size_t _size;   // 记录哈希表中有效元素个数
};


void TestHashTable()
{
	HashTable<int> ht;
	ht.Insert(4);
	ht.Insert(7);
	ht.Insert(8);
	ht.Insert(27);
	ht.Insert(9);
	ht.Insert(5);
	ht.Insert(3);
	ht.Insert(1);


	ht.Erase(2);
	ht.Erase(8);
}