//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int a = 2;
//	int b = a++;
//	int c = ++a;
//	/*前置递增会对变量自增，再运算表达式
//	后置递增会先运算表达式，再进行变量自增*/
//	cout << "b=" << b<<endl;//2，b=a++,先进行表达式运算，故先取a=2
//	cout << "c=" << c<<endl;//4，c=++a，先进行变量自增，再进行表达式运算（此时a=3，已经经过了a++），故在3的基础上＋1
//
//	//自减同理
//	std::cout << "Press Enter to continue...";
//	std::cin.get();
//	return 0;
//}