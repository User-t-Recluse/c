#include<iostream>
using namespace std;

int main()
{
	//�߼�
	//��(��) ���٣��ٱ���
	//��c++���棬����0�ⶼ����
	int a = 10;
	cout << (!a) << endl;//0;a���棬��aΪ��
	cout << (!!a) << endl;//1;a���棬��aΪ�٣�����aΪ�棨����������

	//&&���룩ȫ��Ϊ�棬�м��Ǽ�
	int a1 = 10, b = 0, c = 1;
	cout << (a1 && b) << endl;//0
	cout << (a1 && c) << endl;//1

	//||(��) �������棬�����Ǽ�
	int a2 = 1, b1 = 0, c1 = 0;
	cout << (a1 ||b1) << endl;//1
	cout << (b1 ||c1) << endl;//0





	std::cout << "Press Enter to continue..";
	std::cin.get();

	return 0;

}