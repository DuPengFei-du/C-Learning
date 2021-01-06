//符号有什么好说的呢？确实，符号可说的内容要少些，但总还是有些可以唠叨地方。
//有一次上课，我问学生：‘ / ’这个符号在C 语言里都用在哪些地方？
//没有一个人能答完整。这说明C 语言的基础掌握不牢靠
//如果真正掌握了C 语言，你就能很轻易的回答上来。
//这个问题就请读者试着回答一下吧。
//本章不会像关键字一样一个一个深入讨论，只是将容易出错的地方讨论一下。


//表（2.1）标准C 语言的基本符号

//符号  名称  符号名称
//， 逗号     > 右尖括号
//.圆点      !感叹号
//； 分号    | 竖线
//： 冒号    / 斜杠
//？ 问号    \ 反斜杠
//’ 单引号  ~波折号
//“ 双引号   # 井号
//(左圆括号   ) 右圆括号
//[左方括号   ] 右方括号
//{ 左大括号  } 右大括号
//% 百分号    & and（与）
//^ xor（异或）* 乘号
//- 减号       = 等于号
//< 左尖括号   + 加号


//C 语言的基本符号就有20 多个，每个符号可能同时具有多重含义，而且这些符号之间
//相互组合又使得C 语言中的符号变得更加复杂起来。
//你也许听说过“国际C 语言乱码大赛（IOCCC）”
//能获奖的人毫无疑问是世界顶级C程序员。
//这是他们利用C 语言的特点极限挖掘的结果。下面这个例子就是网上广为流传的
//一个经典作品：

//#include <stdio.h>
//main(t, _, a)char* a; {return!0 < t ? t < 3 ? main(-79, -13, a + main(-87, 1 - _,
//	main(-86, 0, a + 1) + a)) : 1, t < _ ? main(t + 1, _, a) : 3, main(-94, -27 + t, a) && t == 2 ? _ < 13 ?
//	main(2, _ + 1, "%s %d %d\n") : 9 : 16 : t < 0 ? t < -72 ? main(_, t,
//		"@n'+,#'/*{}w+/w#cdnr/+,{}r/*de}+,/*{*+,/w{%+,/w#q#n+,/#{l+,/n{n+,/+#n+,/#\
//;#q#n+,/+k#;*+,/'r :'d*'3,}{w+K w'K:'+}e#';dq#'l \q#'+d'K#!/+k#;q#'r}eKK#}w'r}eKK{nl]'/#;#q#n'){)#}w'){){nl]'/+#n';d}rw' i;# \
//){nl]!/n{n#'; r{#w'r nc{nl]'/#{l,+'K {rw' iK{;[{nl]'/w#q#n'wk nw' \
//iwk{KK{nl]!/w{%'l##w#' i; :{nl]'/*{q#'ld;r'}{nlwb!/*de}'c \
//;;{nl'-{}rw]'/+,}##'*}#nc,',#nw]'/+kd'+e}+;#'rdq#w! nr'/ ') }+}{rl#'{n' ')# \
//}'+}##(!!/")
//	: t < -50 ? _ == *a ? putchar(31[a]) : main(-65, _, a + 1) : main((*a == '/') + t, _, a + 1)
//	: 0 < t ? main(2, 2, "%s") : *a == '/' || main(0, main(-61, *a,
//		"!ek;dc i@bK'(q)-[w]*%n+r3#l,{}:\nuwloca-O;m.vpbks,fxntdCeghiry"), a + 1); }


//还没发狂？看来你抵抗力够强的。这是IOCCC 1988 年获奖作品，作者是Ian Phillipps。
//毫无疑问，Ian Phillipps 是世界上最顶级的C 语言程序员之一。
//你可以数数这里面用了多少个符号。当然这里我并不会讨论这段代码
//也并不是鼓励你也去写这样的代码（关于这段代码的分析，你可以上网查询
//恰恰相反，我要告诉你的是：
//大师把代码写成这样是经典，你把代码写成这样是垃圾！
//所以在垃圾和经典之间，你需要做一个抉择。


//注释符号
//几个似非而是的注释问题

//C 语言的注释可以出现在C 语言代码的任何地方。这句话对不对？这是我当学生时我
//老师问的一个问题。我当时回答是不对。好，那我们就看看下面的例子：
//
//A），int/*...*/i;
//B），char* s = "abcdefgh //hijklmn";
//C), //Is it a \
//valid comment?
//D), in/*…*/t i;
//
//我们知道C 语言里可以有两种注释方式：/* */ 和//。那上面3 条注释对不对呢？建议你
//亲自在编译器中测试一下。上述前３条注释都是正确的，最后一条不正确。

//A), 有人认为编译器剔除掉注释后代码会被解析成inti，所以不正确。编译器的确会将注
//释剔除，但不是简单的剔除，而是用空格代替原来的注释。再看一个例子：
///*这是*/#/*一条*/define/*合法的*/ID/*预处理*/replacement/*指*/list/*令*/
//你可以用编译器试试。


//B), 我们知道双引号引起来的都是字符串常量，那双斜杠也不例外。
//C), 这是一条合法的注释，因为\是一个接续符。关于接续符，下面还有更多讨论。
//D), 前面说过注释会被空格替换，那这条注释不正确就很好理解了。
//现在你可以回答前面的问题了吧？

//但注意：/*…*/这种形式的注释不能嵌套，如：
///*这是/*非法的*/* /
//因为/*总是与离它最近的*/匹配。


//y = x/*p

//y = x/*p，这是表示x 除以p 指向的内存里的值，把结果赋值为y？我们可以在编译器
//上测试一下，编译器提示出错。
//实际上，编译器把/*当作是一段注释的开始，把/*后面的内容都当作注释内容，直到出
//现*/为止。这个表达式其实只是表示把x 的值赋给y，/*后面的内容都当作注释。但是，由
//于没有找到*/，所以提示出错。

//我们可以把上面的表达式修改一下：
//y = x / *p
//或者
//y = x / (*p)
//这样的话，表达式的意思就是x 除以p 指向的内存里的值
//把结果赋值为y 了。也就是说只要斜杠（ / ）和星号（ * ）之间没有空格
//都会被当作注释的开始。这一点一定要注意。


//怎样才能写出出色的注释

//注释写得出色非常不容易，但是写得糟糕却是人人可为之。糟糕的注释只会帮倒忙。


//在《Code Complete》这本书中，作者记录了这样一个故事：
//有位负责维护的程序员半夜被叫起来，去修复一个出了问题的程序。
//但是程序的原作者已经离职，没有办法联系上他。
//这个程序员从未接触过这个程序。在仔细检查所有的说明后，他只发现了一条注释，如下：
//MOV AX 723h; R.I.P.L.V.B.
//这个维护程序员通宵研究这个程序，还是对注释百思不得其解。虽然最后他还是把程
//序的问题成功排除了，但这个神秘的注释让他耿耿于怀。说明一点：汇编程序的注释是以分
//号开头。
//几个月后，这名程序员在一个会议上遇到了注释的原作者。
//经过请教后，才明白这条注释的意思：
//安息吧，路德维希.凡.贝多芬（Rest in peace, Ludwig Van Neethoven）。
//贝多芬于1827 年逝世，而1827 的十六进制正是723。这真是让人哭笑不得！


//#include<stdio.h>
//int main()
//{
//	int a = 1;
//	char* pa = (char*)& a;
//	if (*pa == 1)
//		printf("小端\n");
//	else
//		printf("大端\n");
//	return 0;
//}


//#include<stdio.h>
//int CheckSystem()
//{
//	int a = 1;
//	char* pa = (char*)& a;
//	return *pa;
//}
//int main()
//{
//	int ret = CheckSystem();
//	if (ret == 1)
//		printf("小端\n");
//	else
//		printf("大端\n");
//	return 0;
//}


//#include<stdio.h>
//int CheckSystem()
//{
//	union Un
//	{
//		int i;
//		char c;
//	}u;
//	u.i = 1;
//	return u.c;
//}
//int main()
//{
//	int ret = CheckSystem();
//	if (ret == 1)
//		printf("小端\n");
//	else
//		printf("大端\n");
//	return 0;
//}


//#include<stdio.h>
//#include<stdlib.h>
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//int main()
//{
//	int arr[10] = { 1,3,5,7,9,2,4,6,8,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//#include<stdio.h>
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//void Swap(char* buf1, char* buf2,int width)
//{
//	for (int i = 0; i < width; i++)
//	{
//		char temp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = temp;
//		buf1++;
//		buf2++;
//	}
//}
//void My_BubblSort(int arr[], int sz, int width, int (*cmp_int)(const void* e1, const void* e2))
//{
//	for (int i = 0; i < sz - i; i++)
//	{
//		for (int j = 0; j < sz - i - 1; j++)
//		{
//			if (cmp_int((char*)arr + j * width, (char*)arr + (j + 1) * width) > 0)
//			{
//				Swap((char*)arr + j * width, (char*)arr + (j + 1) * width, width);
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[10] = { 1,3,5,7,9,2,4,6,8,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	My_BubblSort(arr, sz, sizeof(arr[0]), cmp_int);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//#include<stdio.h>
//#include<assert.h>
//int my_strlen(const char* str)
//{
//	assert(str);
//	if (*str == '\0')
//		return 0;
//	else
//		return 1 + my_strlen(str + 1);
//}
//int main()
//{
//	char arr[] = "ABCDEF";
//	int len = my_strlen(arr);
//	printf("%d", len);
//	return 0;
//}


//#include<stdio.h>
//#include<assert.h>
//int my_strlen(const char* str)
//{
//	assert(str);
//	int count = 0;
//	while (*str)
//	{
//		str++;
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "ABCDEF";
//	int len = my_strlen(arr);
//	printf("%d", len);
//	return 0;
//}


//#include<stdio.h>
//#include<assert.h>
//int my_strlen(char* str)
//{
//	assert(str);
//	char* ret = str;
//	while (*str)
//	{
//		str++;
//	}
//	return str - ret;
//}
//int main()
//{
//	char arr[] = "ABCDEF";
//	int len = my_strlen(arr);
//	printf("%d", len);
//	return 0;
//}


//#include<stdio.h>
//#include<assert.h>
//char *my_strcpy(char* dest,const char *source)
//{
//	assert(dest);
//	assert(source);
//	char* ret = dest;
//	while (*dest++=*source++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr[] = "ABCDEF";
//	char arr1[20] = { 0 };
//	my_strcpy(arr1, arr);
//	printf("%s", arr1);
//	return 0;
//}

//#include<stdio.h>
//#include<assert.h>
//#include<string.h>
//char* my_strncpy(char* dest, const char* source,size_t count)
//{
//	assert(dest);
//	assert(source);
//	char* ret = dest;
//	int sz = 0;
//	if (strlen(source) < count)
//	{
//		sz = count - strlen(source);
//		count = strlen(source);
//	}
//	while (count--)
//	{
//		*dest++ = *source++;
//	}
//	while (sz--)
//	{
//		*dest = '\0';
//	}
//	return ret;
//}
//int main()
//{
//	char arr[] = "ABCDEF";
//	char arr1[20] = { 0 };
//	my_strncpy(arr1, arr,3);
//	printf("%s", arr1);
//	return 0;
//}


//#include<stdio.h>
//#include<assert.h>
//char* my_strcat(char* dest, const char* source)
//{
//	assert(dest);
//	assert(source);
//	char* ret = dest;
//	while (*dest)
//	{
//		dest++;
//	}
//	while (*dest == *source)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr[20] = "ABCD";
//	char arr1[] = "abcd";
//	my_strcat(arr, arr1);
//	printf("%s", arr);
//	return 0;
//}


//出色注释的基本要求

//注释应当准确、易懂，防止有二义性。错误的注释不但无益反而有害

//边写代码边注释，修改代码同时修改相应的注释，以保证注释与代码的一致性。
//不再有用的注释要及时删除

//注释是对代码的“提示”，而不是文档。程序中的注释应当简单明了，注释太
//多了会让人眼花缭乱。

//一目了然的语句不加注释。例如：i++; /* i 加1 */多余的注释

//对于全局数据（全局变量、常量定义等）必须要加注释。

//注释采用英文，尽量避免在注释中使用缩写，特别是不常用缩写。
//因为不一定所有的编译器都能显示中文，别人打开你的代码，
//你的注释也许是一团乱码。还有，你的代码不一定是懂中文的人阅读。

//注释的位置应与被描述的代码相邻，可以与语句在同一行，也可以在上行，但
//不可放在下方。同一结构中不同域的注释要对齐。

//当代码比较长，特别是有多重嵌套时，应当在一些段落的结束处加注释，便于阅读。

//注释的缩进要与代码的缩进一致。

//注释代码段时应注重“为何做（why）”，而不是“怎么做（how）”。
//说明怎么做的注释一般停留在编程语言的层次，而不是为了说明问题。
//尽力阐述“怎么做”的注释一般没有告诉我们操作的意图
//而指明“怎么做”的注释通常是冗余的

//数值的单位一定要注释。
//注释应该说明某数值的单位到底是什么意思。
//比如：关于长度的必须说明单位是毫米，米，还是千米等；
//关于时间的必须说明单位是时，分，秒，还是毫秒等

//对变量的范围给出注释。

//对一系列的数字编号给出注释，尤其在编写底层驱动程序的时候（比如管脚编号）。

//对于函数的入口出口数据给出注释。
//关于函数的注释在函数那章有更详细的讨论。