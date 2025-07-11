//#include<iostream>
//using namespace std;
//
//int main()
//{
//	//do...while 练习：从100-1000的数字中，将水仙花数字打印出来（水仙花数是指一个三位数的各位数的三次幂之和等于它本身；153=3*3*3+5*5*5+1*1*1）
//
//	//1.首先打印100-1000的三位数
//	int num = 100;
//	do {
//		
//		
//
//		//2.获取水仙花数
//		int a = 0;
//		int b = 0;
//		int c = 0;
//
//		a = num % 10;//获取个位
//		b = num / 10 % 10;//获取十位
//		c = num / 100;//获取百位
//		if(num==a*a*a+b*b*b+c*c*c){
//			cout << num << endl;
//		}
//		num++;
//
//	} while (num < 1000);
//	
//
//
//
//	cout << "Press Enter to continue...";
//	cin.ignore();
//	cin.get();
//
//	return 0;
//
//}