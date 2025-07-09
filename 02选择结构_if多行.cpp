//#include<iostream>
//#include<string>
//using namespace std;
//
//int main()
//{
//	//选择结构，if
//	//您购买了一张彩票，如果上面有有数字0，则表示你中彩票了，反之则无。
//	
//	//请输入你彩票上的号码
//	/*string numStr;
//	cout << "请输入你彩票的号码：" << endl;
//	cin >> numStr;
//	这种方式可以识别前导零、中间零等所有情况，适用于更严格的彩票号码规则*/
//	int num;
//	cout << "请输入你彩票的号码：" << endl;
//	cin >> num;
//	//打印你的彩票号码
//	cout << "打印你的号码:" <<num<< endl;
//
//	//判断含有某字符数是否存在，这里应使用字符串形式的语句更好
//	string numstr = to_string(num);
//
//	//判断你的号码
//	if (numstr.find('0')!=string::npos)//如果if（）后面加上分号则不会进行判断，而直接输出{}内容
//	{
//		cout << "恭喜你中奖" << endl;
//	}
//	else{
//		cout << "下次一定" << endl;
//	}
//	
//	std::cout << "Press Enter to continue..";
//	std::cin.get();
//
//	return  0;
//
//}