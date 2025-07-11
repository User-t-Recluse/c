//#include<iostream>
//using namespace std;
//
//int main()
//{
//	
//	/*
//	do_while语法：do{循环语句} whlie（循环条件）；
//	do_hile与while的区别：前者会先执行一边循环语句，再进行循环条件的判断；whlie反之
//	*/
//
//	//区别示例
//	int num = 0;
//	//do {
//	//		cout << num << endl;
//	//		num++;
//	//} while (num);//它先会执行一次循环语句（num=1），再进行循环条件的判断，此时在这里会进入死循环
//	
//	while (num)//这里相比于do_while就无法进行循环，因为他先判断循环条件（num=0） 
//	{
//
//		cout << num << endl;
//		num++;
//	}
//
//	cout << "Press Enter to continue...";
//	cin.get();
//	cin.ignore();
//
//	return 0;
//
//}