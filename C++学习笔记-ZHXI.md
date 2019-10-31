# C++学习笔记-ZHXI

## 1. Hello World-学习C++基础
``` c++
#include <iostream>		// 引入io流库
int main()			// 主函数，定义返回值为整型
{
   std::cout << "Hello World";	// std命名空间（属于io流库）中的cout命令，用于输出，`<<`引导数据流
   return 0;			// 返回值为0，告诉计算机代码执行成功
}
```
`#include`使用函数库，`<iostream>`是读写流，`#include <iostream>`使用iostream函数库进行数据读写，相当于perl里用use调用模块。  
`int`表示整型，`main`是主函数，`int main(){}`建立了一个主函数main，其输出为整型数值。`{}`括号内是函数体。  
`std`是标准命名空间，`cout`是在std下定义的输出函数，`std::cout`是调用输出。`<<`是流，类似于linux下的管道，将后面的"hello world"传递给输出函数。  
`return 0`返回一个0，由编写者指定运行成功后输出的整型数值，可作为判断运行成功与否的信号，传递给后续工具链用于检查。  
`std::cout << "Hello World" << std::endl;`增加std::endl可以在函数内进行换行操作；`"hello\nworld"`在字串中增加/n也可以换行，这与perl中的/n一致。  
`std::cout << "hello" << "world";`连续传递的结果是连续输出，两者间会无空格连接。  
`//`单行注释用//符号，与perl中的#效果一致；`/*    */`多行注释。  

---

## 2. 输入-关键字-一些约定
### 2.1 **whitespace**包括了空格、制表符、换行符，这与perl类似。
``` c++
#include <iostream>
int main()
{
std::cout        <<		// 多余的空格不会影响程序
"Hello World"  ;		// 后面多余的空行也不会影响程序

return 0;
}
```
上例中，`int main(){}`中的空格是语法性的不能省略，函数体中的许多空格是非语法性的，编译时会被编译器忽略，可以酌情省略。  

### 2.2 标识符是**用户定义的元素的名称**。
``` c++
#include <iostream>
int main()
{
	int num;	// 声明一个整型数据num，声明后计算机才会分配相应大小的内存地址，才能存数据，防止溢出
	num = 2;
	std::cout << num;
	return 0;
}
```
上例先定义了整型的主函数main，又定义了整形的标识符num，为其赋值并打印。  

**c++中的关键字**：  
asm	auto	bool    break	case	catch
char	class	const   const_cast	continue	default
delete	do	double  dynamic_cast	else	enum
explicit	export	extern  false	float	for
friend	goto	if  inline	int	long
mutable	namespace	new operator	private	protected
public	register	reinterpret_cast    return	short	signed
sizeof	static	static_cast struct	switch	template
this	throw	true    try	typedef	typeid
typename	union	unsigned    **using**	virtual	void
volatile	wchar_t	while
``` c++
#include <iostream>
int main()
{
	using std::cout;
	cout << "Hello World" << std::endl;	// endl用于结束本行，即换行
	cout << "This is my second line" << std::endl;
	return 0;
}
```
`using`可以**在局部声明一个命名空间中的输出函数std::cout**，其后再调用cout时，可以不用重复书写std命名空间；注意并未声明std::endl，所以换行还需书写std。  
``` c++
#include <iostream>
int main()
{
	using namespace std;		// using std命名空间后，其中的函数就可以直接调用，而不用写`std::`了
	cout << "Hello World" << endl;
	cout << "This is my second line" << endl;
	return 0;
}
```
同一个命名空间的多个函数都需要重复调用时，一个个书写using声明还是麻烦;`using namespace std`可以一次声明std命名空间下的所有函数。  

### 2.3 **获取输入**：  
``` c++
#include <iostream>
int main()
{
	int n;
	std::cin >> n;	// cin获得输入信息（c语言input函数）
	std::cout << n;	// cout获得输出信息
	return 0;
}
```
`cin`是类C语言的输入函数，`cout`是类C语言的输出函数，两者都属于`std namespace`命名空间，也同样属于`<iostream>`输入输出流的库。  

### 2.4 **一些约定**  
- 标识符命名由字符数字和_组成，且只能以字符或_开头，不能与关键字冲突
- 函数命名常采用骆驼式（getMarks, getInput）或下划线式（get_marks, get_input）
- 函数体的大括号，一般与函数名对齐

---

## 3. 变量-常量-数据类型
``` c++
#include <iostream>
int main()
{
	int n;    // 声明整型变量n
	n = 4;    // 把4赋给n
	std::cout << "n is " <<  n;  // 输出n值
	return 0;
}
```
上例中，n就是变量，4是赋的值也就是常量。  
`""`中的n是字符，`""`外的n是变量，可以替换为实际的值。  
声明和赋值两个动作合起来叫做初始化（声明类型，赋给具体值），可以简化为`int n=4`。  
c++中未初始化的变量取垃圾回收后的某些值，而不像其他语言规定的未初始化的变量都为0。  

### 3.1 数据类型
`int`是整型，`char`是字符型，`float`是浮点型，`double`是双浮点型，`bool`是布尔型。  
``` c++
#include <iostream>
int main()
{
	using namespace std;
	int i;      //declaring integer variable
	float f;    //declaring float variable
	double d;   //declaring double variable
	char c;     //declaring character variable
	bool b, bl;     //decaring boolean variable;

	//assigning values to these variables

	i = 45;
	f = 34.234;
	d = 34.43242343;	
	c = 'g';
	b = true;	// 本身存储了布尔型变量
	bl = 5 < 4;	// 比较运算，结果为布尔型变量

	cout << "int : " << i << endl;
	cout << "float : " << f << endl;
	cout << "double : " << d << endl;
	cout << "char : " << c << endl;
	cout << "b : " << b << endl;
	cout << "bl : " << bl << endl;
	return 0;
}
```
上例声明了5种变量，并逐个输出，其中布尔型输出为0或1。  

### 3.2 输入其他类型（字符型）
``` c++
#include <iostream>
int main()
{
	char ch;	// 定义字符变量
	std::cin >> ch;	// 输入字符
	std::cout << ch;// 输出字符
	return 0;
}
```
上例定义了字符型变量ch，将cin从输入设备获取的字符赋值给ch，然后将ch给cout打印出来。  

### 3.3 **字符的存储-借助ASCII编号**
C++中使用ASCII列表的编号来存储字符，使用整型数据int（ASCII表的编号）与字符ch对应（ASCII表中的值）。  
``` c++
#include <iostream>
int main()
{
	char ch;
	std::cin >> ch;		// 输入字符变量
	std::cout << int(ch);	// 输出整型变量（通过ASCII表查找字符对应的编号）
	return 0;
}
```

### 3.4 类型转换
**隐式转换**  
``` c++
#include <iostream>
int main(){
	int a = 12;	// a是整型
	char ch = 'h';	// ch是字符型

	//will add ASCII value of ch
	int sum = a + ch;	// 进行sum计算，需要时整型或浮点型，此时隐式地将字符转换为整型
	std::cout << "sum = " << sum << std::endl;
	return 0;
}
```
C++是一个强类型语言。  
一个整型数据和一个浮点型数据不能直接进行加减运算，需要转换为相同类型才可以操作。浮点型数据存放了更详细的数据，因此整型数据会被自动转换成浮点型，然后才进行操作。这样的自动转换成为隐式转换，即不需要在代码中写出来。  

**显式转换**  
``` c++
#include <iostream>
int main(){
	float x = 2.45;			// x本是浮点型
	std::cout << (int)x << std::endl;	// 输出前显式转换为整型
}
```
程序员可以通过符合语法的代码手动进行数据类型的转换。  
语法为：`(data-type)expression;`  
上例中，`(int)x`即将变量x显式地转换为整型。  

**L值和R值**  
变量在声明后，会分配一个`内存地址`和`储存的值`。  
L值l-value是指Left-value，即左侧的值。实际上`指向变量的内存地址`。无论是否被赋值，l-value一般都写在左边。  
R值r-value是指Right-value，即右侧的值。实际上`指向变量的值`。  
``` c++
#include <iostream>
int main()
{
	int x, y;	// 先声明变量，在逐个赋值
	x = 4;
	y = x + 2;
	std::cout << "x = " << x << ", y = " << y;
	return 0;
}
```

**字符和字串**  
字符数据都由引号引住，包括普通的`字母`和`逃逸字符`（`转义字符`，\n,\t...）。  
特殊字符，加上`逃逸符`（`转义符`）后表示`特殊含义`的字符。如，\n换行，\t制表符。  
``` c++
#include <iostream>
int main()
{
	std::cout << "Hello" << '\t' << "World" << '\n' << '\\' << '\'' << '\"';	// 转义与Perl相同
	return 0;
}
```

---

## 4. 操作符
### 4.1 算术操作符
+加，-减，*乘，/除，%取余  
- 注意，整型数据做除法，即使不能整除，也会返回较小的整数值。需要做精确运算的话，应该先转换为浮点型(float(x))。
``` c++
#include <iostream>
int main()
{
	using namespace std;
	int x = 5;
	int y = 2;
	cout << (x/y) << endl;		// 直接以整型计算，输出为整型
	cout << (x/float(y)) << endl;	// 转为浮点，则输出为浮点
	cout << (float(x)/y) << endl;
	cout << (float(x)/float(y));
	return 0;
}
```
上例中，整型转浮点型的方式与前面学到的不同。  
先前学的是`(float)x`的转换方式，此处是`float(x)`的转换方式。  
已知x=7的情况下，测试`(float)x`和`float(x)`的输出结果均为2.33333。说明两种显式转换都是正确的。  

**关于运算优先级**  
- `()`小括号
- `++, --, !` 自增，自减，求反
- `*, /, %` 乘法，除法，求余
- `+, -` 加法，减法
- `>, >=, <, <=` 比较运算
- `==, =!` 等于，**不等于**
- `&&` 与
- `||` 或
- `=, +=, -=, *=, /=, %=` 运算并赋值

上面优先级最高，向下优先级依次减小，即所有场景()内的操作最先进行。  

### 4.2 比较操作符
`>, >=, <, <=, ==, !=` 大于，大于等于，小于，小于等于，等于，**不等于**  
上述不等于`!=`与前述不等于`=!`写法不同，表达的含义相同而使用情景不同。  
前面的不等于`!=`是布尔运算，用于判断操作符左右是否相等，不相等为真。  
后面的不等于`=!`猜测是赋值符(排除式的赋值)，即让L-value不等于R-value。  
- 这类情况还见于之前显式转换，与`(datatype)x`和`datatype(x)`同意类似。  
- 也可能与4.4中自增自减的`前缀写法`和`后缀写法`的关系相同。  

``` c++
#include <iostream>
int main()
{
	using namespace std;
	int a = 5, b = 4;
	cout << (a == b) << endl;
	cout << (a != b) << endl;	// 判断是否不等于
	cout << (a > b) << endl;
	cout << (a < b) << endl;
	cout << (a >= b) << endl;
	cout << (a <= b) << endl;
	return 0;
}
```
上例比较结果打印到屏幕，实际是布尔型。  
`=` 是赋值，`==` 是等于的比较操作。  

### 4.3 逻辑操作符
`&&`逻辑与，两个条件同时满足才为真；`||`逻辑或，两个条件任一满足即为真；`!`逻辑非，取条件的非。  

### 4.4 赋值操作符
`=`直接赋值，`+=`增加后赋值，`-=`减去后赋值，`*=`乘以后赋值，`/=`除以后赋值，`%=`取余后赋值。

- `a++`加1并赋值，`a--`减1并赋值。  
- `++a`加1并赋值，`--a`减1并赋值。  
- 上述两者表示相同，`a++`, `a--`是后缀写法，`++a`, `--a`是前缀写法。  

**前缀写法和后缀写法的区别**  
`a++`先返回原a值，再自增，而`++a`先自增，再返回a值。  

**计算变量的大小（内存占用）**  
`sizeof()`用于计算字符、字串、整型、浮点的大小。  
字符占用1，浮点占用4，双精度浮点占用8。  

### 4.5 引入数学计算
需要在`源码`中包含`cmath库`，使用`#include <cmath>`引入数学计算库。与hello示例中用`#include <iostream>`引入读写数据流库一样。  

常见的数学计算如，  
sin 正弦函数	cos 余弦函数	ceil 稍大的整数	floor 稍小的整数	fmin 取最小值	fmax 取最大值	fabs 取绝对值	round 舍入最接近的整数	sqrt 求平方根	pow 求平方	log 求对数  

---

## 5. 流程控制
### 5.1 条件语句
流程控制主要包括：if, if else, else if, which case, break  

**if, if else, else if综合示例**  
``` c++
#include <iostream>
int main()
{
    using namespace std;
    int x = 4, y = 5, z = 1;
    if ( (x > y) && (x > z) ){			// 若此两条件同时成立则执行
        cout << "x is the greatest integer" << endl;
    }
    else if ( (y > x) && (y > z) ){		// 若此两条件同时成立则执行
        cout << "y is the greatest integer" << endl;
    }
    else
        cout << "z is the greatest integer" << endl;
    return 0;
}
```

**switch..case语句示例**  
``` c++
switch(expression)		// 总的跳转开关，检索具体的case代号，决定执行哪个代码块
{
    case constant1:		// case代号，以及具体将执行的代码
        statement(s);
        break;			// 每个case执行完，需要break，回到switch判断
    case constant2:
        statement(s);
        break;
/* you can give any number of cases */
    default:
        statement(s);		// 若所有case不满足，默认将执行的代码块
}
```
每个`case必须用break跳出`，否则无法回到switch。会使得从符合条件的case开始，后续所有结果全部执行。  

**ternary operator 三元运算符**  
`condition? expression1 :expression2;  
条件满足执行exp1，否则执行exp2;  
``` c++
#include <iostream>
int main(){
	using namespace std;
	int age;
	cout << "Enter age" << endl;
	cin >> age;
	(age > 18) ? cout << "eligible to vote" : cout << "not eligible to vote";
	// 是否大于18？		cout输出能投票：		cout输出不能投票；
	return 0;
}
```
上例判断年龄即采用三元运算符（用? : ;作为其边界）。  

### 5.2 循环语句
循环语句包括while, do while, for。  
``` c++
while(condition)
{
    statement(s)
}
```
while语句中，`条件i`用于判断`语句i`是否执行；  
``` c++
do{
    statement(s)
}
while( condition );
```
do..while语句，先执行一次，之后`条件i`用于判断`语句i+1`是否执行；  
``` c++
for(initialization; condition; propagation)
{
    statement(s)
}
```
for语句通过初值，条件值，步长来生成系列数值。  
``` c++
#include <iostream>
int main(){
	using namespace std;
	int n;
	for( n = 1; n <= 10; n++ ){
		cout << n << endl;
	}
	return 0;
}
```
``` c++
int n = 1;
for( ; n <= 10; n++)
{
    cout << n << endl;
}
```
初始化时赋值为1，后面不用赋值；  
``` c++
int n;
for( n = 1; n <= 10; )
{
    cout << n << endl;
    n++;
}
```
条件中未写自增语句，在每次执行完后，同时执行语句中的自增。  
循环语句之间，以及循环和条件语句之间都可以`嵌套使用`。  

**无限循环**  
无限循环可以一直迭代下去，其条件总是为真。常`将条件留空`来使语句一直迭代。  
``` c++
#include <iostream>
int main(){
	using namespace std;
	for( ; ; ){		// ()中为空，表示任何输入都可以让它继续执行，会造成无限迭代
		cout << "This loop will never end" << endl;
	}
	return 0;
}
```
其中的for语句没有参数，将会一直迭代输出。  

### 5.3 跳出和继续循环
`break`用于跳出某个循环，在`switch..case`中用到过。  
``` c++
#include <iostream>
int main(){
    using namespace std;
    int n;
    for(n = 1; n <= 5; n++){	// for循环指定1到5作为区间
         cout << "*" << endl;
         if(n == 2){		// if判断是否等于2，为2时跳出for循环
             break;
         }
    }
    return 0;
}
```
案例输出两次星号，n为2时，先输出，后判断，再跳出。  
`continue`可`立刻将控制权交给条件语句`（忽略后面未执行部分，相当于break并回到判断）。  
具体的传递总是在while, do while, for中传给最邻近的条件。  
``` c++
#include <iostream>
int main(){
    using namespace std;
    int n = 1;		// 初始n为1
    while(n < 10){
        if (n == 5){	// 碰见n为5时，继续判断，即跳过输出
        n = n + 1;
      	    continue;
        }
        cout << "n = " << n << endl;// 正常情况会输出n的值（n为5时，被continue拦下）
        n++;
    }
    return 0;
}
```
上例会略过5，而输出1到9的其他数字。因为if语句将等于5的情况截了回去，未执行输出的情况下增加1并重新判断执行。  

---

## 6. 函数
函数是打包好的特定代码块，可以避免大量重复性代码。  
函数库在c++中已经预定义了，也可以自己声明并定义一个函数。  

**声明函数**  
`return_type function_name ( parameters ) ;`  
``` c++
float average( int num1, int num2 );
```
定义时，需要`严格定义函数值的类型、各参数的类型`（此处因为两个整数相除可能为小数，所以函数值定义为浮点数）。  

**定义函数-内部的代码块**  
``` c++
float average( int num1, int num2 )	// 声明一个输出为浮点数的函数，函数名（可直接调用）为average()
{
    float avg;			// 函数内部，声明一个浮点型变量，表示平均值
    avg = ( num1 + num2 )/2.0;
    return avg; 
}
```

**调用函数**  
``` c++
average( num1, num2 );		// 直接输函数名和参数，进行调用
```
直接调用函数名和参数即可；  
``` c++
#include <iostream>
// 声明函数
float average( int num1, int num2 ); /* 声明一个名为average的函数 */
// 函数调用
int main(){
	using namespace std; // 声明标准命名空间，则可以直接调用其中的所有预设函数，而不用每次都写`std::`
	int num1, num2;		// 声明两个整型变量，作为参数
  	float c;		// 声明一个浮点变量，作为结果
  	cout << "Enter first number" << endl;	// 依次提示输入
  	cin >> num1;
  	cout << "Enter second number" << endl;
  	cin >> num2;
  	c = average( num1, num2 );	// 调用函数average()及其参数来计算均值（定义在后面）
  	cout << "Average is " << c << endl;
	return 0;
}
// 定义函数;定义可以放在调用的前面
float average( int num1, int num2 )	// 定义输出为浮点型，名为average的函数
{
    	float avg;			// 声明浮点数（结果）变量，内存先为之划出地址
    	avg = ( num1 + num2 )/2.0;
   	return avg;
}
```
若函数没有返回值，则返回类型标记为void；具体看下面两例：  
``` c++
#include <iostream>

using namespace std;

void display( int n ) // void此处存疑，后续需要继续研究
{
    	cout << "Number is " << n << endl;
}

int main(){
	int n;
  	cout << "Enter number" << endl;
  	cin >> n;
  	display(n);	// 调用函数
	return 0;
}
```
示例1中存在主函数，输入一个内容赋给n，能够通过display()语句显示出来，则void函数没有用到。  
``` c++
#include <iostream>

using namespace std;

void display( )
{
    	cout << "Function with no argument" << endl;
}

int main(){
	display();		// 主函数中是空的，没有输入参数，因此也没有返回值，会调用void函数
	return 0;
}
```
示例2中的主函数没有包含参数，意味着无法输出；则转而执行void函数，输出提示信息。  

**内部调用**  
函数（包括自定义函数）可以嵌套调用，实际上几乎所有的程序中，主函数main()下面都嵌套了程序的主体（包含了所有代码块）。  
``` c++
#include <iostream>

using namespace std;

int div_2(int a){	// 构造div_2()函数
  if(a%2==0){
  	return 1;
  }
  else{
    return 0;
  }
}

void div_6(int b){	// div_6()调用了div_2()
  if( div_2(b)==1 && b%3 == 0 ){
    cout << "Yes, the number is divisible by 6." << endl;
  }
  else{
    cout << "No, the number is not divisible by 6." << endl;
  }
}

int main(){		// 定义主函数，调用div_6()
  div_6(12);
  div_6(25);
  return 0;
}
```
先定义了函数`int div_2()`，之后通过调用`int div_2()`定义了`void div_6()`，又通过调用`void div_6()`定义了主函数。  

**递归调用**  
递归调用是从函数内部进行的调用。  
``` c++
#include <iostream>

using namespace std;

int factorial( int a )
{
  if( a == 0 || a == 1)	// 输入为0或1的情况
  {
    return 1;
  }
  else		// 输入为大于1的数字
  {
    return a*factorial(a-1);
  }
}

int main(){	// 主函数体
  int n;

  cout << "Enter number" << endl;
  cin >> n;	// 输入数字

  int fact  = factorial(n);	// 调用阶乘函数

  cout << "Factorial of " << n << " is " << fact << endl;	// 输出信息

  return 0;
}
```

**内联函数**  
函数嵌套可以使程序结构更清楚，但`调用函数花费的时间将会比执行函数更多`，使效率降低。  
``` c++
#include <iostream>

using namespace std;

int main()
{
	int a = 2, b = 3;
	cout << (a + b) << endl;	// 计算代码直接在函数体内部
	return 0;
}
```
上例中`将加法运算放在输出语句中，直接做运算`，然后输出；没有调用函数，所以`效率较高`，但要做大量重复性计算时，需要写许多`重复性代码`。  
``` c++
#include <iostream>

using namespace std;

int sum(int x, int y)
{
	return x+y;	// 构造了函数sum()用于计算
}

int main()
{
	int a = 2, b = 3;
	cout << sum(a, b) << endl;	// 调用sum()
	return 0;
}
```
上例中使用单独的sum函数计算，再通过main函数调用；有利于`重复调用sum函数`，但调用使得`效率变低`。  

**inline函数**  
inline函数实际上是c++中`对自定义函数的一种特殊声明`。在声明sum函数时，`除了声明输出类型`外，再`加上inline声明`，`inline int sum()`，则在调用时`编译器会用函数中的代码替换函数调用`。相当于在两者间做到了平衡，减少了重复代码的工作量，有增加了运行效率。  

**变量范围**  
变量范围是指变量生效的范围。局部变量只在函数或代码块内部生效，全局变量在整个主函数都有效。  
``` c++
#include <iostream>
using namespace std;

int multiply(int a, int b){	// 输出为整型的函数multiply，参数为整型，函数内部有效，主函数中不会体现
        return a * b;	// 功能为返回两个整型数值
}

int main() {
        int x = 3, y = 5;
        int z;	// 定义xy为输入，z为输出
        z = multiply( x, y );	// 调用函数multiply()
        cout << z << endl;
        return 0;
}
```
这是局部变量的示例，函数multiply()中的参数只在本函数中有效，在main函数中并未体现。  
``` c++
#include <iostream>

using namespace std;

void func1(){
	int x = 4;	// x只在func1中有效
	cout << x << endl;
}

void func2(){
	int x = 5;	// x只在func2中有效
	cout << x << endl;
}

int main(){
	func1();	// func1和func2分开调用，互不干扰
	func2();
	return 0;
}
```
上例则更加明显，函数1和函数2之间的x都没有干扰到对方，只在本函数内部生效。  

**全局变量**  
在`main函数外`进行定义，定义为全局作用的变量，在整个程序中可以用`任意函数进行调用`。  
``` c++
#include <iostream>

using namespace std;

int g;

int main(){
	int a = 4;
	g = a * 2;
	cout << g << endl;
	return 0;
}
```
g是在main函数之外定义的，是全局变量，可以在main函数中通过任意函数调用。  
``` c++
#include <iostream>

using namespace std;

int g = 10;	// main外部定义全局变量g

void func1(){
	g = 20;
	cout << g << endl; // 覆盖g并打印
}

int main(){
	func1();
	g = 30;
	cout << g << endl; // func2调用func1，再次覆盖g并打印
	return 0;
}
```
`全局变量g的值可以在main函数内再更改`，更改后的值的`作用范围`需要看main函数内`各函数的层级关`系而定。  

---

## 7. 指针
在变量赋值时，系统会为其分配相应的内存地址。指针指向一些变量，其中存储了某个变量的内存地址。  
c++将存储地址的变量称为指针。  
变量a的内存地址表示为`&a`，读作`address of a` (a的地址)。  
``` c++
int a = 44;
int *b; // 指针b的声明
/* b是一个整数，*表示b指向某个整数，即b是指向某个整数的指针，b存储着某个整数的内存地址 */
b = &a; // 将a的地址存入b中，即b是指向a的指针
```
`a是个变量`，其值存在内存中，分配了地址，记作`&a`；&a赋给b，即`变量a的地址存如变量b`中，用`*`表示b是一个指针`*b`；指针`*b`指向变量a的地址。  
指针是`用于保存变量地址`的`特殊变量`。
``` c++
#include <iostream>

using namespace std;

int main(){
	int a = 10; // 声明变量a
  	int *p;	// 声明指针p
  	p = &a;	// 给`指针的变量p`赋值，值为`变量a的地址`（赋值时不加*号）
		
		/*
		p	是指针的变量部分，是&a的值，也就是个地址	p = &a = 0xffff377c
		*p	是`p指向的内存地址中存储的值`的指针，是个值	*p = *&a = 10
			p是地址&a，*p就指向它的值a
		&p	是p的内存地址，是存储指针的变量的地址	&p与&a或许临近但无关，&p = 0xffff3378
		*&p	是*p指针的二次引用，指向&p所存的地址，该地址保存的是p也就是&a的地址	*&p = 0xffff337c
			&p是地址，*&p指向它的值，它的值是p也是个地址（&a）
		*/
  	cout << "p = " << p << endl;
  	cout << "*p = " << *p << endl;
  	cout << "&p = " << &p << endl;
  	cout << "*&p = " << *&p << endl;
	return 0;
}
```

**上例完整展示了指针相关的概念**  
a为10，&a是a的地址；p是新的变量，保存了&a，p是a的地址；*p的形式调用p，就会从p中找到&a这个地址，取a的值。  
而p变量本身也有地址，如果想用新的指针指向这个指针，进行套用即可。  
&p即是p的地址，*&p即是他的指针。  

**个人总结**  
指针分为`符号部分*`和`变量部分p`（以上例为依据）；  
`*`表示这是一个指针，像是一种声明方式，类似于`int p`声明这是一种整型数据一样；  
`p`存储其所指向的地址，像是一个索引，是个单纯的变量，不过存储的是地址而非数值；  
`*p`组成真正完整的指针，指向p变量所存的内存地址，将该位置上的值读出来；  
`*&p`是对p变量的二次指向，该指针指向的是另一个指针，读出来的值是前一个指针存储的内存地址；  
从这个层面上讲，C++中的指针，在保证提取到值的前提下，只能引用一次；  
每次运行都会分配不同的地址，因此每次运行的结果可能不同；  

**将指针传递给函数**  
``` c++
#include <iostream>

using namespace std;

void swap( int *a, int *b ) // 定义void函数swap
{
	int t;	// 借助中间变量t交换两个变量的地址
	t = *a;	// 必须交换地址，在外部引用时才能交换
	*a = *b; // 如果直接交换值，只会在函数内生效，外部调用时无法实现交换
	*b = t;
}

int main(){
	int num1, num2;
	cout << "Enter first number" << endl;
	cin >> num1;
	cout << "Enter second number" << endl;
	cin >> num2;
	swap( &num1, &num2);	// 调用swap函数
	cout << "First number = " << num1 << endl;
	cout << "Second number = " << num2 << endl;
	return 0;
}
```
按照正常的函数调用（对变量值进行调用），函数的参数是传递给函数参数的副本的，实际的值并不发生改变。  
因此要想实现可调用的参数值交换，需要交换变量的内存地址，交换了内存地址则参数也会改变实际值。  

指针还可以指向数组，后面才会介绍到。  

---

## 8. 数组
### 8.1 声明或定义数组
方法一：声明空数组  
基本语法是`datatype array_name[array_size]`，即要声明数组中保存的数据类型、数组名、数组容量。例如，`int n[6]`表示`用于保存整型数据的名为n大小为6的数组`；  
声明数组大小，可以为其分配足够的内存空间；  
方法二：声明后直接赋值  
例如，`int n[]={2,4,21,32,53,12}`，声明了一个`名为n的整型数组`，并直接赋值，所以不必声明其容量；  
- 数组的下标从0开始计算（与Perl相同）  

### 初始化数组

### 传递数组

### 数组指针

### 循环调用数组

### 二维数组


---

## 9. 数组标准库
### 声明数组标准库

### 初始化数组标准库

### 传递数组（标准库）

### 子函数

### 迭代

### 多维数组（标准库）

### 用标准库传递多维数组


---

## 10. 向量标准库



---

## 11. 字串



---

## 14. 字串标准库



---

## 15. 预处理



---

## 16. 结构化



---

## 17. 面向对象



---

## 18. 类和对象



---

## 8. 解构



---

## 8. 初始化列表



---

## 8. 子类



---

## 8. 构造函数重载



---

## 8. 对象的数组



---

## 8. 函数的更多信息



---

## 8. 多重继承



---

## 8. 虚拟和抽象



---

## 8. 封装



---

## 8. 友类和函数



---

## 8. 文件读写



---

## 8. 模板



---

## 8. 常量关键字



---

## 8. 动态内存管理



---

## 8. 枚举



---

## 8. 枚举类



---

## 8. 联合体



---

## 8. 类型定义



---

## 8. 存储类

