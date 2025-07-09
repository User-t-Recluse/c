#include<iostream>
using namespace std;

int main()
{
	float num1 = 3.1415f;
	cout << "num1=" << num1 << endl;
	cout << "float占用字节：" << sizeof(num1) << endl;
	double num2 = 3.1415;
	cout << "num2" << num2 << endl;
	cout << "double占用字节：" << sizeof(num2) << endl;
	//科学计数法
	float f1 = 3e2;
	cout << "f1=" << f1 << endl;

	std::cout << "Press Enter to continu..";
		std::cin.get();

		return 0;
}