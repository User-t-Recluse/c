//1.下面是c的写法（c++完全可以兼容c，故此没报错，但不符合c++的写法）
//#include <stdio.h>
//#define _CRT_SECURE_NO_WRANINGS
//int main()
//{
//	printf("hello world\n");
//	return 0;
//}

//2.下面是c++的基本写法
#include <iostream>
#include <cstdlib>//添加system函数所需头文件
using namespace std;

int main()
{
	cout << "hello world" << endl;//可选择添加输出语句
	/*
	这里的endl它会在当前的输出流插入一个换行符（/n），使光标移动到下一行开头；
	同时，std：：endl与/n的区别在于前者会强制刷新输出缓冲区而后者不会
	*/
	std::cout << "hello world!\\n" << "\n";
	/*std::cout << "Hello World with endl" << std::endl;*///要文件写入权限

	system("pause");//有局限性，部分场景需要添加头文件（还有被禁用的风险）

	return 0;

}


//#include <iostream>
//int main()
//{
//	std::cout << "Press Enter to continue... " ;
//	std::cin.get();//更安全的跨平台输出
//
//	return 0;
//
//
//}


