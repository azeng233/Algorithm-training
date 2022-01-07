/*从键盘输入一个大写字母，要求改用小写字母输出。
输入
　　A
输出
　　a
*/
#include <cstdio>
#include <iostream>
#include <ctype.h>

using namespace std;

int main(){
	char a;
	cin >> a;
	a = tolower(a);
	cout << a;
	return 0;
}
