#define _CRT_SECURE_NO_WARNINGS 1



//使用if语句的其他注意事项

//先处理正常情况，再处理异常情况
//在编写代码是，要使得正常情况的执行代码清晰，确认那些不常发生的异常情况处理
//代码不会遮掩正常的执行路径。这样对于代码的可读性和性能都很重要。
//因为，if 语句总是需要做判断，而正常情况一般比异常情况发生的概率更大
//（否则就应该把异常正常调过来了），如果把执行概率更大的代码放到后面
//也就意味着if 语句将进行多次无谓的比较。另外，非常重要的一点是，
//把正常情况的处理放在if 后面，而不要放在else 后面。当然这也
//符合把正常情况的处理放在前面的要求

//确保if 和else 子句没有弄反。

//这一点初学者也容易弄错，往往把本应该放在if 语句后面的代码和本应该放在else 语
//句后面的代码弄反了


//switch、case 组合
//既然有了if、else 组合为什么还需要switch、case 组合呢？

//那你既然有了菜刀为什么还需要水果刀呢？
//你总不能扛着云长的青龙偃月刀（又名冷艳
//锯）去削苹果吧。如果你真能做到，关二爷也会佩服你的。
//if、else 一般表示两个分支或是嵌套表示少量的分
//但如果分支很多的话……还是用switch、case 组合吧。
//其基本格式为 :

//switch(variable)
//{
//case Value1:
//	//program code
//	break;
//case Value2:
//	//program code
//	break;
//case Value3:
//	//program code
//	break;
//	…
//default:
//	break;
//}

//很简单，但有两个规则：
//每个case 语句的结尾绝对不要忘了加break，否则将导致多个分支重叠（除非
//有意使多个分支重叠）。

//最后必须使用default 分支。即使程序真的不需要default 处理，也应该保留语句：
//default:
//	break;
//这样做并非画蛇添足，可以避免让人误以为你忘了default 处理。

//case 关键字后面的值有什么要求吗

//好，再问问：真的就这么简单吗？看看下面的问题：
//Value1 的值为0.1 行吗？ - 0.1 呢？ - 1 呢？0.1 + 0.9 呢？ 1 + 2 呢？3 / 2 呢？‘A’呢？“A”
//呢？变量i（假设i 已经被初始化）呢？NULL 呢？等等。
//这些情形希望你亲自上机调试一下，看看到底哪些行，哪些不行。
//记住：case 后面只能是整型或字符型的常量或常量表达式（想想字符型数据在内存里
//是怎么存的）。


//case 语句的排列顺序
//似乎从来没有人考虑过这个问题，也有很多人认为case 语句的顺序无所谓。
//但事实却不是如此。如果case 语句很少，你也许可以忽略这点
//但是如果case 语句非常多，那就不得不好好考虑这个问题了。
//比如你写的是某个驱动程序，也许会经常遇到几十个case 语句的情况。
//一般来说，我们可以遵循下面的规则：


//按字母或数字顺序排列各条case 语句。
//如果所有的case 语句没有明显的重要性差别，那就按A - B - C 或1 - 2 - 3 
//等顺序排列case语句。
//这样做的话，你可以很容易的找到某条case 语句。比如：
//#include<stdio.h>
//int main()
//{
//	int variable;
//	switch (variable)
//	{
//	case A:
//		//program code
//		break;
//	case B:
//		//program code
//		break;
//	case C:
//		//program code
//		break;
//		…
//	default:
//		break;
//	}
//}


//把正常情况放在前面，而把异常情况放在后面。
//如果有多个正常情况和异常情况，把正常情况放在前面，并做好注释；
//把异常情况放在后面，同样要做注释。比如：

//switch (variable)
//{
//	///////////////////////////////////////////////////////////////////////////////////
//	//正常情况开始
//case A:
//	//program code
//	break;
//case B:
//	//program code
//	break;
//	//正常情况结束
//	//////////////////////////////////////////////////////////////////////////////////////
//	//异常情况开始
//case -1:
//	//program code
//	break;
//	//异常情况结束
//	//////////////////////////////////////////////////////////////////////////////////////
//	…
//default:
//	break;
//}


//按执行频率排列case 语句
//把最常执行的情况放在前面，而把最不常执行的情况放在后面。
//最常执行的代码可能也是调试的时候要单步执行的最多的代码。
//如果放在后面的话，找起来可能会比较困难，而放在前面的话，可以很快的找到


//使用case 语句的其他注意事项

//简化每种情况对应的操作。
//使得与每种情况相关的代码尽可能的精炼。case 语句后面的代码越精炼
//case 语句的结果就会越清晰。
//你想想，如果case 语句后面的代码整个屏幕都放不下，这样的代码谁也难
//看得很清晰吧。如果某个case 语句确实需要这么多的代码来执行某个操作
//那可以把这些操作写成一个或几个子程序
//然后在case 语句后面调用这些子程序就ok 了。
//一般来说case语句后面的代码尽量不要超过20 行。

//不要为了使用case 语句而刻意制造一个变量。
//case 语句应该用于处理简单的，容易分类的数据。如果你的数据并不简单，那可能使用ifelse
//if 的组合更好一些。为了使用case 而刻意构造出来的变量很容易把人搞糊涂，应该避免
//这种变量。比如：

//char action = a[0];
//switch (action)
//{
//case ‘c’:
//	fun1（）；
//		break;
//case ‘d’:
//	…
//		break;
//default:
//	break;
//}

//这里控制case 语句的变量是action。而action 的值是取字符数组a 的一个字符。
//但是这种方式可能带来一些隐含的错误。
//一般而言，当你为了使用case 语句而刻意去造出一个变量时，真正的数据可能不会按照你所希望的方式映射到case 语句里。
//在这个例子中，如果用户输入字符数组a 里面存的是“const”这个字符串，
//那么case 语句会匹配到第一个case上，并调用fun1（）函数。
//然而如果这个数组里存的是别的以字符c 开头的任何字符串（比如：“col”，“can”），
//case 分支同样会匹配到第一个case 上。但是这也许并不是你想要的结果
//这个隐含的错误往往使人抓狂。如果这样的话还不如使用if - else if 组合。比如：
//if（0 == strcmp(“const”，a））
//	{
//	fun1();
//	}
//else if
//{
//…
//}


//把default 子句只用于检查真正的默认情况

//有时候，你只剩下了最后一种情况需要处理，于是就决定把这种情况用default 子句来
//处理。这样也许会让你偷懒少敲几个字符，但是这却很不明智。
//这样将失去case 语句的标号所提供的自说明功能，而且也丧失了使用default 子句处理错误情况的能力。
//所以，奉劝你不要偷懒，老老实实的把每一种情况都用case 语句来完成，而把真正的默认情况的处理
//交给default 子句


//do、while、for 关键字

//C语言中循环语句有三种：while 循环、do - while 循环、for 循环

//while 循环：先判断while 后面括号里的值，如果为真则执行其后面的代码
//否则不执行。while（1）表示死循环。死循环有没有用呢？看下面例子：

//比如你开发一个系统要日夜不停的运行，但是只有操作员输入某个特定的字符
//‘#’才可以停下来。

//while（1）
//{
//	if (‘#’ == GetInputChar())
//	{
//		break;
//	}
//}

//break 与continue 的区别

//break 关键字很重要，表示终止本层循环。现在这个例子只有一层循环，
//当代码执行到break 时，循环便终止

//如果把break 换成continue 会是什么样子呢？continue 表示终止本次（本轮）循环。
//当代码执行到continue时，本轮循环终止，进入下一轮循环。

//while（1）也有写成while(true) 或者while(1==1) 
//或者while((bool) 1)等形式的，效果一样。

//do - while 循环：先执行do 后面的代码，然后再判断while 后面括号里的值，如果为真，
//循环开始；否则，循环不开始。其用法与while 循环没有区别，但相对较少用。
//do while 循环至少会执行一次

//for 循环：for 循环可以很容易的控制循环次数
//多用于事先知道循环次数的情况下


//在多重循环中，如果有可能，应当将最长的循环放在最内层，最短的循环放
//在最外层，以减少CPU 跨切循环层的次数。

//长循环在最内层，效率、

//for (col = 0; col < 5; col++)
//{
//	for (row = 0; row < 100; row++)
//	{
//		sum = sum + a[row][col];
//	}
//}


//长循环在最外层，效率低

//for (row = 0; row < 100; row++)
//{
//	for (col = 0; col < 5; col++)
//	{
//		sum = sum + a[row][col];
//	}
//}


//建议for 语句的循环控制变量的取值采用“半开半闭区间”写法

//半开半闭区间写法和闭区间写法虽然功能是相同
//但相比之下，半开半闭区间写法写法更加直观

//不能在for 循环体内修改循环变量，防止循环失控
//for (n = 0; n < 10; n++)
//{
//	…
//		n = 8;//不可，很可能违背了你的原意
//	…
//}


//循环要尽可能的短，要使代码清晰，一目了然。
//如果你写的一个循环的代码超过一显示屏，那会让读代码的人发狂的。
//解决的办法由两个：第一，重新设计这个循环，确认是否这些操作都必须放在这个循环里；
//第二，将这些代码改写成一个子函数，循环中只调用这个子函数即可。
//一般来说循环内的代码不要超过20行。


//把循环嵌套控制在3 层以内。
//国外有研究数据表明，当循环嵌套超过3 层
//程序员对循环的理解能力会极大的降低。
//如果你的循环嵌套超过3 层
//建议你重新设计循环或是将循环内的代码改写成一个字函数。