#include<iostream>
using namespace std;

int main()
{
	//goto ������ã�������������ת���
	//�﷨�� goto ���������ñ���������ǣ����ڳ�����������ǵı��������ڣ�ִ�е�goto���ʱ����ֱ����ת������ǵ�λ��

	cout << "1" << endl;

	goto FLAG;//��2 3 4��ִ�У�ֱ��ִ��FLAG��������

	cout << "2" << endl;
	cout << "3" << endl;
	cout << "4" << endl;

FLAG:

	cout << "5" << endl;
	cout << "6" << endl;

	/*goto FLAG;  �����ڴ˴�����goto����ʵ�ֻ�����ִ����ѭ�� 5 6 ���*/
	cout << "7" << endl;




	cout << "Press Enter to continue...";
	cin.ignore();
	cin.get();

	return 0;

}