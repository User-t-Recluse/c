//#include<iostream>
//using namespace std;
//
///*
//if和switch的区别：
//swtich 优点：对于多条件判断时，结构清晰，执行效率高
//swtich 缺点：表达式只能是整形和字符型，而无法进行区间判断（if可以）
//*/
//
//int main()
//{
//	//switch语句：执行多条件分支语句
//	/*语法结构和解释：该语句根据表达式的结果选择case分支进行执行，
//	 *当case语句都不满足表达式要求时，则会执行default
//		switch(表达式)
//		{
//		case 结果1，执行语句；break；
//		case 结果2，执行语句；break；
//			...
//		default:执行语句；break；
//		}
//	*/
//	
//	//练习：给一个软件进行评分
//	//五星--非常棒！！
//	//四星--还不错！
//	//三星--凑合。
//	//二星--就这？
//	//一星--趁早下架吧！
//
//	//请用户进行打分
//	int score =0 ;
//	cout << "请您对该软件进行评分：" << endl;
//	cin >> score;
//
//	//显示用户的评分
//	cout << "您对该软件的评分是：" << score << endl;
//
//	//用户对软件的评分所对应的感官态度
//
//	switch (score) {
//		//case里面如果没有break，程序会一直向下执行
//	case 5:cout << "您对软件的评分所对应的感官态度:五星--非常棒！！" << endl; break;
//	case 4:cout << "您对软件的评分所对应的感官态度:四星--还不错！" << endl; break;
//	case 3:cout << "您对软件的评分所对应的感官态度:三星--凑合。" << endl; break;
//	case 2:cout << "您对软件的评分所对应的感官态度:二星--就这？" << endl; break;
//	case 1:cout << "您对软件的评分所对应的感官态度:一星--趁早下架吧！" << endl; break;
//
//	default:cout << "无法识别的评分，正确的评分范围：1~5" << endl; break;
//		
//	}
//
//
//	cout << "Press Enter to contiune..";
//	cin.get();
//
//	return 0;
//
//}