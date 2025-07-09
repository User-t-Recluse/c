//#include<iostream>
//using namespace std;
//
//int main()
//{
//	//用户输入分数
//	int score;
//	cout << "请用户输入分数：" << endl;
//	cin >> score;
//
//	//提醒用户输入的分数："
//	cout<< "你输入的分数是：" << score<<endl;
//
//	//判断  >=600上一本，>=500上二本,>=400上三本，<400没考上本科
//	//条件判断的顺序必须严格从高到低，否则会导致逻辑错误。
//	if (score >= 600)
//	{
//		if (score >= 700) {
//			cout << "恭喜你考上985" << endl;
//		}
//		else if (score >= 650) {
//			cout << "恭喜你考上211" << endl;
//		}
//		else//if嵌套的话还是要用else收尾（即嵌套条件都未满足）
//		{
//			cout << "恭喜你考上双非一本" << endl; }
//		
//	}
//	else if (score >= 500)
//	{
//		cout << "恭喜你考上二本" << endl;
//	}
//	else if (score >= 400)
//	{
//		cout << "恭喜你考上三本" << endl;
//	}
//	else //这里直接使用else进行收尾（即以上判断条件都未实现）
//	{
//		cout << "没有考上本科" << endl;
//	}
//
//	std::cout << "Press Enter to continue...";
//	std::cin.get();
//
//	return 0;
//}