#include <iostream>
using namespace std;/*using namespace std的作用是引入 C++ 标准库的命名空间 std ，
使得代码中可以直接使用标准库中的标识符，而无需在每个标识符前添加std::前缀。*/

/*1.#define 宏常量
  2.const修饰的变量*/

//1.define 宏常量
#define Day 7

int main()
{
	cout << "一周有多少：" << Day << "天" << endl;//此时输出的数值就是定义的宏常量值
	/*同时，我们在定义宏常量值后就不可以随意更改其数值
	例如：
	Day=14；
	cout << "一周有多少：" << Day << "天" << endl;//这个时候他就会提示Day必须是可修改的值（即被定义后不可以修改）
	*/
	//2.const修饰的变量
	const int year = 365;
	/*const 是 C++ 的关键字，编译器会为其分配存储空间（除非被优化为常量表达式）。
	#define 是预处理指令，仅在编译前进行文本替换，不涉及类型检查。
	综上，在 C++ 中，const int Day = 7; 和 #define Day 7 虽然都可以表示常量，
	但它们在本质、作用域、类型安全、调试支持、内存分配 等方面存在显著差异。
	*/
	//year = 700;我们在不加const时，可以随意修改year的值，输出的值也是我们改过之后的
	cout << year << endl;//不加引号时，编译器会查找变量名对应的值。
	/*当我们在给变量加上""后，变量就变成了字符串了（即"" 内的内容会被原样输出，编译器不会将其与变量关联。）
	例如：cout << "year" << endl;//此时输出的是字符串year，而不是我们要的值
	*/
	
	system("pause");
	return 0;
}


/*using namespace std; 的作用是引入标准库命名空间 std，使得可以直接使用 cout、vector 等标准库标识符。
它的定义是 命名空间引入指令 ，将 std 中的所有名称引入当前作用域。
虽然方便，但需注意名称冲突风险，在大型项目中建议更谨慎地使用。
#include <iostream>
using namespace std;
int cout = 10; // 与 std::cout 冲突！
int main() {
    cout << "cout"; // 编译错误！
    return 0;
}
*/