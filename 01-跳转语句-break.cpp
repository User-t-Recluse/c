//#include<iostream>
//using namespace std;
//
//int main()
//{
//	//break���ã���������ѡ��ṹ��ѭ���ṹ
//	/*break��ʹ��ʱ��
//	1.������switch��������У�������ֹcase��֧��������switch
//	2.������ѭ������У�����������ǰ��ѭ��
//	3.������Ƕ������У���������������ڲ�ѭ�����
//	*/
//
//	//1.������swtich�����
//	/*cout << "��ѡ�񸱱��Ѷ�" << endl;
//	cout << "1.��ͨ\t" << "2.����\t" << "3.����\t"<<endl;
//
//	int wanjia_select = 0;
//	cin >> wanjia_select;
//	switch (wanjia_select) 
//	{
//	case 1:cout << "��ѡ��ĸ����Ѷ��ǣ���ͨ" << endl; break;
//	case 2:cout << "��ѡ��ĸ����Ѷ��ǣ�����" << endl; break;
//	case 3:cout << "��ѡ��ĸ����Ѷ��ǣ�����" << endl; break;
//
//	default:cout << "����ȷѡ���Ѷ�" << endl; break;
//	
//	}*/
//
//	//2.������ѭ�������
//	//for (int a = 0; a <= 10; a++) {
//	////if(a==5){
//	//// break;//�����ѭ��������
//	//// }
//	//	cout << a << endl;
//	//	break;//ֱ����������ִ�У�ѭ��
//	//}
//
//	/*3.������Ƕ������У�����������ڲ�ѭ��*/
//	for (int i = 10; i <= 20; i++)
//	{
//		//break;��ִ�е�һ��for
//		cout << i << endl;
//		//�ڲ�
//		for (int j = 0; j <= 10; j++)
//		{
//			cout << j << endl;
//			//break;//��ִ��J++�����˳��ڲ�ѭ��
//		}
//		//break;//��ִ��i++
//		cout << endl;
//	}
//	
//
//
//	cout << "Press Enter to continue...";
//	cin.ignore();
//	cin.get();
//
//	return 0;
//}