#include<iostream>
#include<string>
using namespace std;

int main()
{
	//���ε�����
	//int a = 0;
	//cout << "������α���a��ֵ��" << endl;
	//cin >> a;
	//cout << "���α���a=" << a << endl;

	//short b = 0;
	//cout << "��������α���b��ֵ��" << endl;
	//cin >> b;
	//cout << "�����α���b=" << b<< endl;
	//
	//long c = 0;
	//cout << "��������α���c��ֵ��" << endl;
	//cin >> c;
	//cout << "�����α���c=" << c<< endl;

	//long long e = 0;
	//cout << "��������α���e��ֵ��" << endl;
	//cin >>e;
	//cout << "�������α���e=" << e << endl;


	////������
	//float f = 0;
	//cout << "��������ͱ���f��ֵ��" << endl;
	//cin >> f;
	//cout << "�����ȸ����ͱ���f=" << f << endl;
	//double d = 1;
	//cout << "��������ͱ���d��ֵ��" << endl;
	//cin >> f;
	//cout << "˫���ȸ����ͱ���d=" <<d<< endl;

	//�ַ�
	/*char ch = 'g';
	cout << "����ַ�g��ֵ��" << endl;
	cin >> ch;
	cout << "�ַ�ch=" << ch << endl;*/


	//�ַ���
	//string str = "hello";/*�������д"helloworld"����������д"hello world", 
	//��Ϊcin >> str �� hello world �еĿո���Ϊ�ָ�����
	//ֻ��ȡ�� hello��ʣ�����ݣ�world���������������С�
	//��� str ��ֵ�� "hello"�����������Ȼֻ�� hello��*/
	//cout << "����ַ���str��ֵ:" << endl;
	//cin >> str;//getline(cin, str);  ��ȡ�������루ֱ�����з������������Ϳ��Զ�ȡ��hello world��
	//cout << "�ַ���str=" << str << endl;



	//��������
	bool flag = true;
	cout << "���bool��������flag��ֵ��" << endl;
	cin >> flag;/*bool ���͵��������
		����ʹ�� cin >> flag ��ȡһ�� bool ���͵ı���ʱ�������ֵ�ᰴ�����¹������ת����
		���� 0 �� flag ����ֵΪ false����� 0����
		����� 0 ��ֵ���� 1��5��-3 �ȣ� �� flag ����ֵΪ true����� 1����
		����������ַ����� a��hello �ȣ� �� ����ʧ�ܣ�flag ��ֵ����ı䣨���ᴥ���������Ĵ���״̬�������˴���������ǿ������Ϊ0*/
	cout << "bool������flag=" << flag << endl;

	std::cout << "Press Enter to continue..";
	std::cin.get();

	return 0;
}