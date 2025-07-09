#include<iostream>
#include <string>//使用c++风格字符串时是要使用这个头文件的
using namespace std;

int main()
{
	//c风格字符串
	/*注意事项：
	1.char 变量名[]
	2.字符串的表达是需要用双引号的，单引号是用在单字符上的
	*/
	char str[] = "Hello World!";
	cout << str << endl;

	//c++风格
	 string  str2 = "Hello World!";
	 cout << str2 << endl;

	std::cout << "Press Enter to continue...";
	std::cin.get();

	return 0;
}