//#include<iostream>
//using namespace std;
//
//int main()
//{
//	//continue作用：在循环语句中，跳过本次循环余下尚未执行的语句，继续执行下一次循环
//	for (int i = 0; i < 100; i++) 
//	{
//		//只输出偶数
//		if (!(i % 2 == 0))//1 3 5 7 9.....
//		{
//			continue;//执行到本行就不在执行下面的代码了,即正常执行0-99数字的打印但不输出奇数
//			//break；//若在此使用break语句的话就会退出循环可观看（01-跳转语句-break的笔记）
//		}
//
//		cout << i << endl;
//	}
//
//	cout << "Press Enter tp o continue..";
//	cin.ignore();
//	cin.get();
//
//	return 0;
//
//}