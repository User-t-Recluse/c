#include<iostream>
using namespace std;

int main()
{
	//换行符\n
	cout << "hello world" << endl;
	cout << "hello world\n";

	//输出\;
	/*在 C++ 中，反斜杠 \ 作为行末字符时，表示“行继续符（line continuation）”,
	在这种情况下，反斜杠会把下一行也纳入注释的一部分，形成一个多行注释。
	虽然这在语法上是合法的，但大多数编译器会发出警告 ，因为：
	它可能导致意外的行为 ：你可能只是想在注释中写一个反斜杠，
	但编译器却把它当成了“行继续符”，导致注释覆盖了你不希望注释掉的内容。
	可读性差 ：这种写法容易引起误解，不符合常见的编码习惯。*/
	cout << "\\" << endl;

	//水平制表符\t(占8字符)，可以整齐的输出数据
	cout << " aaa\thello world" << endl;//加上aaa所占字节一共占8位，（aaa三个字符，加上五个空格符），也可以不写aaa，直接使用


	std::cout << "Press Enter to continu..";
	std::cin.get();
	
	return 0;
}