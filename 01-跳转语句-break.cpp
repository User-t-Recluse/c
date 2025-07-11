//#include<iostream>
//using namespace std;
//
//int main()
//{
//	//break作用：用于跳出选择结构和循环结构
//	/*break的使用时机
//	1.出现在switch条件语句中，用于终止case分支，并跳出switch
//	2.出现在循环语句中，用于跳出当前的循环
//	3.出现在嵌套语句中，用于跳出最近的内层循环语句
//	*/
//
//	//1.出现在swtich语句中
//	/*cout << "请选择副本难度" << endl;
//	cout << "1.普通\t" << "2.困难\t" << "3.炼狱\t"<<endl;
//
//	int wanjia_select = 0;
//	cin >> wanjia_select;
//	switch (wanjia_select) 
//	{
//	case 1:cout << "你选择的副本难度是：普通" << endl; break;
//	case 2:cout << "你选择的副本难度是：困难" << endl; break;
//	case 3:cout << "你选择的副本难度是：炼狱" << endl; break;
//
//	default:cout << "请正确选择难度" << endl; break;
//	
//	}*/
//
//	//2.出现在循环语句中
//	//for (int a = 0; a <= 10; a++) {
//	////if(a==5){
//	//// break;//第五次循环后跳出
//	//// }
//	//	cout << a << endl;
//	//	break;//直接跳出（不执行）循环
//	//}
//
//	/*3.出现在嵌套语句中，跳出最近的内层循环*/
//	for (int i = 10; i <= 20; i++)
//	{
//		//break;不执行第一个for
//		cout << i << endl;
//		//内层
//		for (int j = 0; j <= 10; j++)
//		{
//			cout << j << endl;
//			//break;//不执行J++，即退出内层循环
//		}
//		//break;//不执行i++
//		cout << endl;
//	}
//	
//
//
//	cout << "Press Enter to continue...";
//	cin.ignore();
//	cin.get();
//
//	return 0;
//}