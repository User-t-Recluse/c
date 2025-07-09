#include<iostream>
#include<string>
using namespace std;

int main()
{
	//整形的输入
	//int a = 0;
	//cout << "请给整形变量a赋值：" << endl;
	//cin >> a;
	//cout << "整形变量a=" << a << endl;

	//short b = 0;
	//cout << "请给短整形变量b赋值：" << endl;
	//cin >> b;
	//cout << "短整形变量b=" << b<< endl;
	//
	//long c = 0;
	//cout << "请给长整形变量c赋值：" << endl;
	//cin >> c;
	//cout << "长整形变量c=" << c<< endl;

	//long long e = 0;
	//cout << "请给长整形变量e赋值：" << endl;
	//cin >>e;
	//cout << "长长整形变量e=" << e << endl;


	////浮点型
	//float f = 0;
	//cout << "请给浮点型变量f赋值：" << endl;
	//cin >> f;
	//cout << "单精度浮点型变量f=" << f << endl;
	//double d = 1;
	//cout << "请给浮点型变量d赋值：" << endl;
	//cin >> f;
	//cout << "双精度浮点型变量d=" <<d<< endl;

	//字符
	/*char ch = 'g';
	cout << "请给字符g赋值：" << endl;
	cin >> ch;
	cout << "字符ch=" << ch << endl;*/


	//字符串
	//string str = "hello";/*这里可以写"helloworld"，而不可以写"hello world", 
	//因为cin >> str 将 hello world 中的空格视为分隔符，
	//只读取到 hello，剩余内容（world）保留在输入流中。
	//因此 str 的值是 "hello"，后续输出自然只有 hello。*/
	//cout << "请给字符串str赋值:" << endl;
	//cin >> str;//getline(cin, str);  读取整行输入（直到换行符），这个命令就可以读取“hello world”
	//cout << "字符串str=" << str << endl;



	//布尔类型
	bool flag = true;
	cout << "请给bool数据类型flag赋值：" << endl;
	cin >> flag;/*bool 类型的输入规则
		当你使用 cin >> flag 读取一个 bool 类型的变量时，输入的值会按照以下规则进行转换：
		输入 0 → flag 被赋值为 false（输出 0）。
		输入非 0 的值（如 1、5、-3 等） → flag 被赋值为 true（输出 1）。
		输入非数字字符（如 a、hello 等） → 输入失败，flag 的值不会改变（但会触发输入流的错误状态），但此处被编译器强制设置为0*/
	cout << "bool数据型flag=" << flag << endl;

	std::cout << "Press Enter to continue..";
	std::cin.get();

	return 0;
}