//#include<iostream>
//using namespace std;
//
//int main()
//{
//	//if��ϰ��������ֻС��ABC�����������ǵ����أ����ж�������˭�����ظ���
//
//	//��ֻС��
//	int A, B, C;
//	//�������ǵ�����
//	cout << "����A�����أ�" << endl;
//	cout << "����B�����أ�" << endl;
//	cout << "����C�����أ�" << endl;
//	cin >> A>>B>>C;
//	
//
//	//// �ж����ص�С��(��&&д���������ܽ��в�������)
//	//if (A >= B && A >= C) {
//	//	cout << "A �����ص�С��" << endl;
//	//}
//	//else if (B >= A && B >= C) {
//	//	cout << "B �����ص�С��" << endl;
//	//}
//	//else if (C >= A && C >= B) {
//	//	cout << "C �����ص�С��" << endl;
//	//}
//
//	//ֱ�ӽ��бȽϣ���������
//	/*int max_weight = max(A, max(B, C));
//
//	cout << "���ص�С���ǣ�";
//	if (A == max_weight) cout << "A ";
//	if (B == max_weight) cout << "B ";
//	if (C == max_weight) cout << "C ";
//	cout << endl;*/
//
//	//�м������
//	if (A > B) {
//		if (A > C) {
//			cout << "A�����ص�С��" << endl;
//		}
//		else {
//			cout << "C�����ص�С��" << endl;
//		}
//	}
//	
//
//	else {
//		if (B > C) {
//			cout << "B�����ص�С��" << endl;
//		}
//		else {
//			cout << "C�����ص�С��" << endl;
//		}
//	}
//	
//	std::cout << "Press Enter to continue...";
//	std::cin.get();
//
//	return 0;
//}