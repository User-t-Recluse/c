#include<iostream>
#include <string>//ʹ��c++����ַ���ʱ��Ҫʹ�����ͷ�ļ���
using namespace std;

int main()
{
	//c����ַ���
	/*ע�����
	1.char ������[]
	2.�ַ����ı������Ҫ��˫���ŵģ������������ڵ��ַ��ϵ�
	*/
	char str[] = "Hello World!";
	cout << str << endl;

	//c++���
	 string  str2 = "Hello World!";
	 cout << str2 << endl;

	std::cout << "Press Enter to continue...";
	std::cin.get();

	return 0;
}