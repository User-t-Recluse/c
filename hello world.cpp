//1.������c��д����c++��ȫ���Լ���c���ʴ�û������������c++��д����
//#include <stdio.h>
//#define _CRT_SECURE_NO_WRANINGS
//int main()
//{
//	printf("hello world\n");
//	return 0;
//}

//2.������c++�Ļ���д��
#include <iostream>
#include <cstdlib>//���system��������ͷ�ļ�
using namespace std;

int main()
{
	cout << "hello world" << endl;//��ѡ�����������
	/*
	�����endl�����ڵ�ǰ�����������һ�����з���/n����ʹ����ƶ�����һ�п�ͷ��
	ͬʱ��std����endl��/n����������ǰ�߻�ǿ��ˢ����������������߲���
	*/
	std::cout << "hello world!\\n" << "\n";
	/*std::cout << "Hello World with endl" << std::endl;*///Ҫ�ļ�д��Ȩ��

	system("pause");//�о����ԣ����ֳ�����Ҫ���ͷ�ļ������б����õķ��գ�

	return 0;

}


//#include <iostream>
//int main()
//{
//	std::cout << "Press Enter to continue... " ;
//	std::cin.get();//����ȫ�Ŀ�ƽ̨���
//
//	return 0;
//
//
//}


