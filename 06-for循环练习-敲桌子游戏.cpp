//#include<iostream>
//using namespace std;
//
//int main()
//{
//	//for循环练习：打印1-100的数字，若数字中的个位或十位含7以及是7的倍数时，我们用敲桌子代替数字，其余数字正常打印
//	
//	//1.首先打印1-100的数字
//	
//	for (int num = 1; num <= 100; num++)
//	{
//		/* num % 10;//个位
//		num / 10;//十位
//		 num %7=0;//7的倍数*/
//		
//		if (num %10==7||num/10==7||num%7==0) {
//			cout << "敲桌子" << endl; 
//		}
//		else {
//			cout << num << endl;
//		}
//		
//	}
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