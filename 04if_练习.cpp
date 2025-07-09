//#include<iostream>
//using namespace std;
//
//int main()
//{
//	//if练习：现有三只小猪ABC，请输入他们的体重，并判断他们中谁的体重更重
//
//	//三只小猪
//	int A, B, C;
//	//输入他们的体重
//	cout << "输入A的体重：" << endl;
//	cout << "输入B的体重：" << endl;
//	cout << "输入C的体重：" << endl;
//	cin >> A>>B>>C;
//	
//
//	//// 判断最重的小猪(用&&写法，但不能进行并列最重)
//	//if (A >= B && A >= C) {
//	//	cout << "A 是最重的小猪" << endl;
//	//}
//	//else if (B >= A && B >= C) {
//	//	cout << "B 是最重的小猪" << endl;
//	//}
//	//else if (C >= A && C >= B) {
//	//	cout << "C 是最重的小猪" << endl;
//	//}
//
//	//直接进行比较，包含并列
//	/*int max_weight = max(A, max(B, C));
//
//	cout << "最重的小猪是：";
//	if (A == max_weight) cout << "A ";
//	if (B == max_weight) cout << "B ";
//	if (C == max_weight) cout << "C ";
//	cout << endl;*/
//
//	//中间变量法
//	if (A > B) {
//		if (A > C) {
//			cout << "A是最重的小猪" << endl;
//		}
//		else {
//			cout << "C是最重的小猪" << endl;
//		}
//	}
//	
//
//	else {
//		if (B > C) {
//			cout << "B是最重的小猪" << endl;
//		}
//		else {
//			cout << "C是最重的小猪" << endl;
//		}
//	}
//	
//	std::cout << "Press Enter to continue...";
//	std::cin.get();
//
//	return 0;
//}