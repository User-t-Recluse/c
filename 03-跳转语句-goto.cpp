#include<iostream>
using namespace std;

int main()
{
	//goto 语句作用：可以无条件跳转语句
	//语法： goto 变量名（该变量名被标记）；在程序中若被标记的变量名存在；执行到goto语句时，会直接跳转到被标记的位置

	cout << "1" << endl;

	goto FLAG;//即2 3 4不执行，直接执行FLAG：后的语句

	cout << "2" << endl;
	cout << "3" << endl;
	cout << "4" << endl;

FLAG:

	cout << "5" << endl;
	cout << "6" << endl;

	/*goto FLAG;  若是在此处再用goto可以实现回跳即执行死循环 5 6 输出*/
	cout << "7" << endl;




	cout << "Press Enter to continue...";
	cin.ignore();
	cin.get();

	return 0;

}