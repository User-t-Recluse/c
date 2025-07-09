#include<iostream>
using namespace std;

int main()
{
	//逻辑
	//！(非) 真变假，假变真
	//在c++里面，除了0外都是真
	int a = 10;
	cout << (!a) << endl;//0;a是真，！a为假
	cout << (!!a) << endl;//1;a是真，！a为假，！！a为真（负负得正）

	//&&（与）全真为真，有假是假
	int a1 = 10, b = 0, c = 1;
	cout << (a1 && b) << endl;//0
	cout << (a1 && c) << endl;//1

	//||(或) 有真则真，无真是假
	int a2 = 1, b1 = 0, c1 = 0;
	cout << (a1 ||b1) << endl;//1
	cout << (b1 ||c1) << endl;//0





	std::cout << "Press Enter to continue..";
	std::cin.get();

	return 0;

}