//#include<iostream>
//using namespace std;
////time系统时间的头文件
//#include<ctime>
//
//
//
//
///*
//while循环练习：
//数字猜测游戏：系统随机生成一个1~100的数字，玩家进行猜测
//如果猜错就提示猜测大了或小了，并继续进行猜测，猜对就提示玩家猜对并退出游戏。
//*/
//int main()
//{
//	srand((unsigned int)time(NULL));//初始化随机种子，使用当前时间作为随机种子，避免rand（）的尴尬
//	//1.系统随机生成数字
//	//rand()这是系统生成的伪随机命令,只会生成重复数字
//	int num = rand() % 101;
//	/*cout << num << endl;*/
//
//	int wanjia_num = 0;
//	//cin >> wanjia_num;循环在外部
//		/*问题 ：玩家的输入仅执行一次，后续循环中没有新的输入，导致 wanjia_num 的值始终不变。
//	后果 ：
//		如果玩家第一次猜对，程序正常退出（看似“执行一次就退出”）。
//		如果玩家第一次猜错，程序会进入无限循环（因为 wanjia_num 值不变，条件始终成立）。*/
//	
//
//	while(true)
//	{
//		//2.玩家对数字进行猜测
//		cout << "请输入你猜测的数字（1~100）" << endl;
//		cin >> wanjia_num;//这里之前只运行一次就执行完毕的原因是输入逻辑未移入循环
//		
//		//避免字母是系统进入死循环
//		if (cin.fail()) {
//			cin.clear();//清除错误标志
//			cin.ignore(numeric_limits<streamsize>::max(), '\n');//清除缓冲区残留字符
//			cout << "请输入有效的数字！" << endl;
//			continue;
//	
//		}
//		//3.系统对玩家给出的数字进行判断
//		if (wanjia_num > num)
//		{
//			cout << "猜测过大" << endl; 
//		}
//		else if (wanjia_num < num) {
//			cout << "猜测过小" << endl;
//		}
//		else {
//			cout << "哇！居然猜对了，好棒棒呀>_<" << endl; break;
//		}
//		
//		
//	}
//	
//	
//	cout << "Press Enter to continue..";
//	cin.get();
//
//	return 0;
//
//}