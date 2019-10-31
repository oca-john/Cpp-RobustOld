# C++学习笔记-RegEx正则式

## 1 转义字符
在讲具体方法之前，我们先了解下C++中使用正则表达式需要注意的一个问题：转义字符
``` c++
cout << regex_match("123", regex("\d+")) << endl;	//结果为0，需要转义字符'\'
cout << regex_match("123", regex("\\d+")) << endl;	//结果为1，完全匹配
```
- \d：匹配一个数字字符；
- \+ ：匹配一次或多次；
- C++中必须要对表达式中的’'进行转义，为什么？

## 2 regex_match
### 2.1 基本概念
match是全文匹配，即要求整个字符串符合匹配规则。
``` c++
cout << regex_match("123", regex("\\d")) << endl;	//结果为0
cout << regex_match("123", regex("\\d+")) << endl;	//结果为1
```
上述方法返回值为bool值，主要用于if条件表达式中。
### 2.2 匹配结果
更多的时候我们希望能够获得匹配结果（字符串），对结果进行操作。这时就需要对匹配结果进行存储，共有两种存储方式。
``` c++
match_results<string::const_iterator> result;
smatch result;						//推荐
```
第二种方式使用起来更简洁、方便，推荐使用。
### 2.3 实例
下面看一个match方法匹配的实例，看看实际应用：
``` c++
string str = "Hello_2018";
smatch result;
regex pattern("(.{5})_(\\d{4})");			//匹配5个任意单字符 + 下划线 + 4个数字

if (regex_match(str, result, pattern))
{
	cout << result[0] << endl;			//完整匹配结果，Hello_2018
	cout << result[1] << endl;			//第一组匹配的数据，Hello
	cout << result[2] << endl;			//第二组匹配的数据，2018
	cout<<"结果显示形式2"<<endl;
	cout<< result.str() << endl;			//完整结果，Hello_2018
	cout<< result.str(1) << endl;			//第一组匹配的数据，Hello
	cout << result.str(2) << endl;			//第二组匹配的数据，2018
}

//遍历结果
for (int i = 0; i < result.size(); ++i)
{
	cout << result[i] << endl;
}
```
- result[]与result.str()这两种方式能够获得相同的值，我更喜欢用数组形式的。
- 在匹配规则中，以括号()的方式来划分组别，实例中的规则共有两个括号，所以共有两组数据。
## 3 regex_search
### 3.1 基本概念
- search是搜索匹配，即搜索字符串中存在符合规则的子字符串。
- match与search一比较便知：
``` c++
cout << regex_match("123", regex("\\d")) << endl;	//结果为0
cout << regex_search("123", regex("\\d")) << endl;	//结果为1
```
### 3.2 实例
直接看例子：
``` c++
string str = "Hello 2018, Bye 2017";
smatch result;
regex pattern("\\d{4}");				//匹配四个数字

//迭代器声明
string::const_iterator iterStart = str.begin();
string::const_iterator iterEnd = str.end();
string temp;
while (regex_search(iterStart, iterEnd, result, pattern))
{
	temp = result[0];
	cout << temp << " ";
	iterStart = result[0].second;			//更新搜索起始位置,搜索剩下的字符串
}

输出结果：2018 2017
```
- 只需要利用迭代器就可以很轻松的访问到所有匹配的结果值。
## 4 regex_replace
### 4.1 基本概念
replace是替换匹配，即可以将符合匹配规则的子字符串替换为其他字符串。
``` c++
string str = "Hello_2018!";
regex pattern("Hello");	
cout << regex_replace(str, pattern, "") << endl;	//输出：_2018，将Hello替换为""
cout << regex_replace(str, pattern, "Hi") << endl;	//输出：Hi_2018，将Hello替换为Hi
```
### 4.2 扩展
除了直接替换以外，还有可以用来调整字符串内容（缩短、顺序等）。
``` c++
string str = "Hello_2018!";	
regex pattern2("(.{3})(.{2})_(\\d{4})");		//匹配3个任意字符+2个任意字符+下划线+4个数字
cout << regex_replace(str, pattern2, "$1$3") << endl;	//输出：Hel2018，将字符串替换为第一个和第三个表达式匹配的内容
cout << regex_replace(str, pattern2, "$1$3$2") << endl;	//输出：Hel2018lo，交换位置顺序
```
- $n用于表示第n组匹配数据（组这个概念在文章前面部分提到过），所以我们可以利用这种方式来将字符串的内容进行调整。
## 5 匹配忽略大小写
有时我们希望能够匹配的时候忽略大小写，这时候就要用到Regex的语法选项了。
``` c++
cout << regex_match("aaaAAA", regex("a*", regex::icase)) << endl; //结果为1
cout << regex_match("aaaAAA", regex("a*")) << endl;	//结果为0
```
regex::icase：匹配时忽略大小写。
## 6 帮助网站
附上两个写正则表达式常用到的网站
- 在线正则表达式验证: http://tool.oschina.net/regex/
- regexper（显示正则表达式匹配结构）: https://regexper.com/
