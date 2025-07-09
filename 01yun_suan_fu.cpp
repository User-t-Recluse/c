//#include <iostream>
//using namespace std;
//
//int main()
//{
//	//加减乘除
//	int num1 = 10;
//	int num2 = 3;
//	//整数运算结果只能是整数
//	cout << num1 + num2 << endl;//13
//	cout << num1 - num2 << endl;//7
//	cout << num1 * num2 << endl;//30
//	cout << num1 / num2 << endl;//3(小数位被舍掉)
//	
//	//取模（%）就是求余
//	int a1 = 10;
//	int b1 = 20;
//	/*	 情况		   结果						示例
//		a < b			a					10 % 20 = 10
//		a == b			0					10 % 10 = 0
//		a > b		a - b * (a / b)			25 % 10 = 5
//		b == 0	    未定义行为（避免）		a % 0（可能导致崩溃）
//		负数处理	结果符号与a相同			(-10) % 3 = -1，10 % (-3) = 1
//
//	*/
//	cout << a1 % b1 << endl;//10 % 20 = 10 - (0 * 20) = 10
//	/*小数不可以取模
//	float a2 = 0.5;
//	float b2 = 0.25;
//	cout << a2 % b2 << endl;*/
//
//
//	std::cout << "Press Enter to continue..";
//	std::cin.get();
//
//	return 0;
//
//}