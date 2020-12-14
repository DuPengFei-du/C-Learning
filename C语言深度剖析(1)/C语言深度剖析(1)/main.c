//C语言深度剖析


//要想学好一门语言，最好的办法就是去调试代码，多多调试


//第一章 关键字

//C语言中一共有32个关键字(最好给出标准说在C99标准下，一共有32个关键字
//auto---声明自动变量，缺省时编译器一般默认伪auto
//int---声明整型变量
//double---声明双精度变量
//long---声明长整型变量
//char---声明字符型变量
//float---声明浮点型变量
//short---声明短整型变量
//signed---声明有符号类型变量
//unsigned---声明无符号类型变量
//struct---声明结构体变量
//union---声明联合数据类型
//enum---声明枚举类型
//static---声明静态变量
//switch---用于开关语句
//case---开关语句分支
//default---开关语句中的其他分支
//break---跳出当前循环
//register---声明寄存器变量
//const---声明只读变量
//volatile---说明变量在程序执行中可被隐含地改变
//typedef---用以给数据类型取别名(当然还有其他的作用)
//extern---声明变量实在其他文件中声明的(也可以被看成是引用变量)
//return---子程序返回语句
//void---声明参数无返回值或者无参数，声明空类型指针
//continue---结束当前循环，开始下一轮循环
//do---循环语句的循环体
//while---循环语句的循环条件
//if---条件语句
//else---条件语句否定分支(与if连用)
//for---一种循环语句
//goto---无条件的跳转语句
//sizeof---计算对象所占空间的大小


//声明和定义的区别
int i;
extern int i;
//上面的两个语句，那个是声明，哪个是定义
//什么是定义，所谓的定义就是(编译器)创建了一个对象,为这个对象分配
//一块内存，并且给他取上一个名字，这个名字就是我们经常所说的变量名或者
//对象名，但是注意，这个名字一旦和这块内存匹配起来，他们呢就是同生共死
//终生不离不弃，应且这块内存位置也不能改变，一个变量或者独享在一定的区域内(比如函数内，全局等)
//只能被定义一次，如果定义多次的话，编译器会提示你重复定义一个对象

//什么是声明，声明具有两重含义：
//第一重含义是：告诉编译器，这个名字已经匹配到一块内存了，下面的代码用到
//变量或对象是在别的地方定义的，声明可以出现多次。
//第二重含义是：告诉编译器，这个名字我先预定了，别的地方再也不能用它来作为
//变量名或者对象名

//这样看来的话，A属于定义，B属于声明

//定义声明最重要的区别：定义创建了对象并为这个对象分配了内存
//声明没有分配内存


//最宽恒大量的关键字---auto
//auto，他很宽恒大量的，就可以当他是不存在的，编译器在默认的缺省情况下
//所有的变量都是auto的

//最快的关键字---register
//register：这个关键字请求编译器尽可能地将变量存在CPU内部寄存器中
//而不是通过内存寻址访问以提高效率，注意，是尽可能，并不是绝对情况下的
//因为一个CPU内部寄存器也就那么几个或者几十个
//如果说你定义了很多register变量，他也不可能全部吧这些变量放入寄存器。

//皇帝身边的小太监---寄存器
//小太监其实就是一个中转站，并没有什么别的功能
//CPU其实就可以看作是皇帝，大臣就相当于是内存，数据是从内存中拿出来的
//小太监其实就是寄存器了(这里先不考虑CPU的告诉缓存区)
//数据从内存里面拿出来之后先放到寄存器，然后CPU再从寄存器里读取数据
//从而进行处理，处理完之后同样把数据通过寄存器放到内u你里面，CPU不直接和
//内存打交道，一个CPU可以有很多的寄存器，不同型号的CPU拥有的寄存器数量是不一样的
//注意：CPU是不直接和内存打交道的
//有人又注意到了，为什么需要这么麻烦啊，其实就是因为速度，寄存器其实就是
//一块一块很小的存储空间，只不过其存取速度要比内存快的多
//毕竟近水楼台先得月，他离CPU很近，CPU一伸手就可以拿到数据了，比在那么大
//一块的内存里面去寻找某个地址上的数据相比来说是快多了

//使用register修饰符的注意点：
//虽然寄存器的速度是非常快，但是使用register修饰符也是有些限制的：register
//变量必须是能被CPU寄存器所接收的类型，意味着rigister变量必须是一个单个的值
//并且其长度应小于或等于整形的长度，而且register变量可能不存放在内存中
//所以不能使用取地址操作符来获取register变量的地址

//最名不副实的关键字---static
//不要误以为static关键字很安静，其实他一点也不安静，这个关键字在C语言里面
//主要有两个作用，当然C++对其进行了修改

//功能1：修饰变量
//变量又分为全局变量和局部变量，但是他们都存在在内存的静态区域
//静态全局变量：作用域仅限于变量被定义的文件中
//其他的文件即使用extern声明也没办法使用他。
//准确地说作用域是从定义的地方开始的，到文件末尾结束
//在定义之处前面的那些代码也不能使用他。想要使用就得在前面加上extern关键字

//静态局部变量
//在函数体里面定于的，就只能在这个函数的内部使用，同一个文档中的其他函数
//也是不可以使用的，由于被static修饰的变量，总是在内存的静态区，所以即使
//这个函数运行结束，这个变量的值还是不会被销毁的，函数下次使用是仍然可以用到这个值


static int j;
void fun1(void)
{
	static int i = 0;
	i++;
}
void fun2(void)
{
	j = 0;
	j++;
}
int main()
{
	for (int k = 0; k < 10; k++)
	{
		fun1();
		fun2();
	}
	return 0;
}


//第二个功能---修饰函数
//在函数的前面加上static使得其成为静态函数，但是此处的static的含义不是指的存储方式
//而指的是对函数的作用域仅限于本文件(所以又成为内部函数)
//使用内部函数的好处在于，不用的人编写不同的函数的时候，不用担心自己定义的函数
//是否会与其他文件中的函数同名

//起初，在C语言中引入static关键字是为了表示退出一个块后仍谈存在的局部变量
//随后static在C中有了第二种含义:用来表示不能被其他文件所访问的全局变量和函数

//基本数据类型---short,int,long,char,float,double
//C数据类型---基本类型，构造类型(数组，结构体，枚举，联合)，指针类型，空类型


//数据类型与模子
//在32位系统上，short咔出来的内存大小是2个字节，int的大小是4个字节，long
//的大小是4个字节，float的大小是4个字节，double的大小是8个字节
//char的大小是1个字节(当然了，这里指的也是一般的情况，具体的情况可以在
//平台上用sizeof去计算大小


//变量的命名规则
//命名应当直观且可以拼读，可望文知意，便于记忆和阅读
//标识符最好采用英文单词或者组合，不允许使用拼音，程序中的英文单词一般还是
//不要太复杂了
//C语言是一种简洁的语言，命名也应该是简洁的，标识符的长度一般不要过长
//另外，英文词尽量不用缩写，特别是非常专业的名词
//当标识符由多个词组成时，每个词的第一个字母大写，其余的全部都小写，如：
int CurrentVal;
//这样的名字看起来比较清晰，远比一长串字符好的多

//尽量避免名字中出现数字编号，如Value2，除非逻辑上的确需要编号
//比如驱动开发时位管脚命名，非编号名字反而不好写

//标识符名分为两部分：规范标识符前缀(后缀)+含义标识。非全局变量可以不使用
//范围限定前缀

//含义标识命名规则，变量命名使用名词性词组，函数命名使用动词词组

//程序中不得出现仅靠大小写区分的相似标识符。

//一个函数名进制被用于其他的地方
void foo(int p_1)
{
	int x = p_1;
}

void static_p(void)
{
	int foo = 1u;
}

//所有宏定义，枚举常数，只读变量全用大写字母命名，用下划线分割单词

const int MAX_LENGTH = 100;

#define FILE_PATH “/usr/tmp”

//定义变量的同时千万千万别忘了初始化。定义变量时编译器并不一定
//清空了这块内存，他的指可能是无效的数据。

//不同类型数据之间的运算符之间的运算要注意精度扩展问题
//一般低精度数据向高精度数据拓展


//最冤枉的关键字---sizeof
//sizeof常年被人误认为是函数，其实sizeof并不是函数，他其实是关键字，我们也可以
//利用编译器去确定他的身份，可以看看下面的这个例子
//int i = 0；
A), sizeof(int)； B)，sizeof(i)； C)，sizeof int； D)，sizeof i；
//毫无疑问，32 位系统下A)，B)的值为4。那C)的呢？D)的呢？

//在32 位系统下，通过Visual C++6.0 或任意一编译器调试，我们发现D)的结果也为4。
//咦？sizeof 后面的括号呢？没有括号居然也行，那想想，函数名后面没有括号行吗？由此轻
//易得出sizeof 绝非函数
//所以我们得出的结论就是sizeof其实不是函数

//好，再看C)。编译器怎么怎么提示出错呢？不是说sizeof 是个关键字，其后面的括号
//可以没有么？那你想想sizeof int 表示什么啊？int 前面加一个关键字？类型扩展？明显不
//正确，我们可以在int 前加unsigned，const 等关键字但不能加sizeof。好，记住：sizeof 在
//计算变量所占空间大小时，括号可以省略，而计算类型(模子)大小时不能省略
//其实总结下来，也就是说sizeof变量可以不加括号，但是sizeof类型是一定
//要加上括号的


//signed、unsigned 关键字

//我们知道计算机底层只认识0、1.任何数据到了底层都会变计算转换成0、1.那负数怎么
//存储呢？肯定这个“ - ”号是无法存入内存的，怎么办？很好办，做个标记。把基本数据类
//型的最高位腾出来，用来存符号同时约定如下：最高位如果是1，表明这个数是负数，其
//值为除最高位以外的剩余位的值添上这个“ - ”号；如果最高位是0，表明这个数是正数，
//其值为除最高位以外的剩余位的值

//这样的话
//一个32位的 
//signed int类型整数其值表示法范围为： - 2^31～2^31 - 1；

//char类型数其值表示的范围为 - 2^7～2^7 - 1。
//一个 32位的 unsigned int类型整数其值表示法范围为：0～ 2^32 - 1；
//8位的 char类型数其值表示的范围为 0～2^8 - 1。同样我们的 signed 关
//键字也很宽恒大量，你也可以完全当它不存在
//编译器缺省默认情况下数据为signed 类型的

//上面的解释很容易理解，下面就考虑一下这个问题：

int main()
{
	char a[1000];
	int i;
	for (i = 0; i < 1000; i++)
	{
		a[i] = -1 - i;
	}
	printf("%d", strlen(a));
	return 0;
}


//答案是255
//for 循环内，当i 的值为0 时，a[0]的值为 - 1。关键就是 - 1 在内存里面如何存储。
//我们知道在计算机系统中，数值一律用补码来表示（存储）。主要原因是使用补码，可
//以将符号位和其它位统一处理；同时，减法也可按加法来处理。另外，两个用补码表示的数
//相加时，如果最高位（符号位）有进位，则进位被舍弃。正数的补码与其原码一致；负数的
//补码：符号位为1，其余位为该数绝对值的原码按位取反，然后整个数加1。
//按照负数补码的规则，可以知道 - 1 的补码为0xff， - 2 的补码为0xfe……当i 的值为127
//时，a[127]的值为 - 128，而 - 128 是char 类型数据能表示的最小的负数。当i 继续增加，a[128]
//的值肯定不能是 - 129。因为这时候发生了溢出， - 129 需要9 位才能存储下来，而char 类型
//数据只有8 位，所以最高位被丢弃。剩下的8 位是原来9 位补码的低8 位的值，即0x7f。
//当i 继续增加到255 的时候， - 256 的补码的低8 位为0。然后当i 增加到256 时， - 257 的补
//码的低8 位全为1，即低八位的补码为0xff，如此又开始一轮新的循环……
//按照上面的分析，a[0]到a[254]里面的值都不为0，而a[255]的值为0。strlen 函数是计
//算字符串长度的，并不包含字符串最后的‘\0’。而判断一个字符串是否结束的标志就是看
//是否遇到‘\0’。如果遇到‘\0’，则认为本字符串结束
//分析到这里，strlen(a)的值为255 应该完全能理解了。这个问题的关键就是要明白char
//类型默认情况下是有符号的，其表示的值的范围为[-128, 127]，超出这个范围的值会产生溢
//出。另外还要清楚的就是负数的补码怎么表示。弄明白了这两点，这个问题其实就很简单了


//if、else 组合
//if 语句很简单吧。嗯，的确很简单。
//那我们就简单的看下面几个简单的问题


//1.6.1，bool 变量与“零值”进行比较
//bool 变量与“零值”进行比较的if 语句怎么写？

//bool bTestFlag = FALSE;//想想为什么一般初始化为FALSE 比较好？
//A), if (bTestFlag == 0); if (bTestFlag == 1);
//B), if (bTestFlag == TRUE); if (bTestFlag == FLASE);
//C), if (bTestFlag); if (!bTestFlag);
//哪一组或是那些组正确呢？我们来分析分析：
//A)写法：bTestFlag 是什么？整型变量？如果要不是这个名字遵照了前面的命名规范，
//肯怕很容易让人误会成整型变量。所以这种写法不好。
//B)写法：FLASE 的值大家都知道，在编译器里被定义为0；但TRUE 的值呢？都是1
//吗？很不幸，不都是1。Visual C++定义为1，而它的同胞兄弟Visual Basic 就把TRUE 定义
//为 - 1.那很显然，这种写法也不好。
//大家都知道if 语句是靠其后面的括号里的表达式的值来进行分支跳转的。表达式如果
//为真，则执行if 语句后面紧跟的代码；否则不执行。那显然，本组的写法很好，既不会引
//起误会，也不会由于TRUE 或FLASE 的不同定义值而出错。记住：以后写代码就得这样写。


//float 变量与“零值”进行比较
//float 变量与“零值”进行比较的if 语句怎么写？
//float fTestVal = 0.0；

//A), if (fTestVal == 0.0); if (fTestVal != 0.0);
//B), if ((fTestVal >= -EPSINON) && (fTestVal <= EPSINON)); //EPSINON 为定义好的
//精度。

//哪一组或是那些组正确呢？我们来分析分析

//EPSINON 为定义好的精度，如果一个数落在[0.0 - EPSINON, 0.0 + EPSINON] 
//这个闭区间内，我们认为在某个精度内它的值与零值相等；
//否则不相等。扩展一下，把0.0 替换为你想
//比较的任何一个浮点数，那我们就可以比较任意两个浮点数的大小了
//当然是在某个精度内。

//同样的也不要在很大的浮点数和很小的浮点数之间进行运算，比如：
//10000000000.00 + 0.00000000001
//这样计算后的结果可能会让你大吃一惊。

//指针变量与“零值”进行比较

//指针变量与“零值”进行比较的if 语句怎么写

//int* p = NULL;//定义指针一定要同时初始化，指针与数组那章会详细讲解。

//A), if (p == 0); if (p != 0);
//B), if (p); if (!p);
//C), if (NULL == p); if (NULL != p);

//哪一组或是那些组正确呢？我们来分析分析：

//A)写法：p 是整型变量？容易引起误会，不好。尽管NULL 的值和0 一样，但意义不同。
//B)写法：p 是bool 型变量？容易引起误会，不好。
//C)写法：这个写法才是正确的，但样子比较古怪。为什么要这么写呢？是怕漏写一个
//“ = ”号:if (p = NULL)，这个表达式编译器当然会认为是正确的，但却不是你要表达的意思。
//所以，非常推荐这种写法。

//else 到底与哪个if 配对呢

//else 常常与if 语句配对，但要注意书写规范，看下面例子：
if（0 == x）
if（0 == y） 
	error（）；
else 
{
//program code
}

//这个else 到底与谁匹配呢？让人迷糊，尤其是初学者。
//还好，C 语言有这样的规定：else
//始终与同一括号内最近的未匹配的if 语句结合。
//虽然老手可以区分出来，但这样的代码谁
//都会头疼的，任何时候都别偷这种懒。
//关于程序中的分界符‘{ ’和‘ }’，建议如下：


//程序中的分界符‘{’和‘}’对齐风格如下：
//注意下表中代码的缩进一般为4 个字符，但不要使用Tab 键
//因为不同的编辑器Tab 键定义的空格数量不一样
//别的编辑器打开Tab 键缩进的代码可能会一片混乱。

void Function(int x)
{
	//program code
}

if (condition)
{
	//program code
}
else
{
	//program code
}

while (condition)
{
	//program code
}

do
{
	//program code
} while (condition);



//if 语句后面的分号

//关于if-else 语句还有一个容易出错的地方就是与空语句的连用。看下面的例子：
if (NULL != p);
fun();

//这里的fun()函数并不是在NULL != p 的时候被调用，而是任何时候都会被调用。
//问题就出在if 语句后面的分号上。在C 语言中，分号预示着一条语句的结尾
//但是并不是每条C 语言语句都需要分号作为结束标志。if 语句的后面并不需要分号
//但如果你不小心写了个分号，编译器并不会提示出错。因为编译器会把这个分号解析成一条空语句。
//也就是上面的代码实际等效于：

if (NULL != p)
{

}
fun();

//这是初学者很容易犯的错误，往往不小心多写了个分号，导致结果与预想的相差很远。
//所以建议在真正需要用空语句时写成这样：
//NULL;
//而不是单用一个分号。这就好比汇编语言里面的空指令，比如ARM 指令中的NOP 指令。
//这样做可以明显的区分真正必须的空语句和不小心多写的分号。