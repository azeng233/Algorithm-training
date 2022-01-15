/*
题目描述
输入一个小写字母，输出其对应的大写字母。例如输入 q[回车] 时，会输出 Q。

输入格式
无

输出格式
无

输入输出样例
输入 #1复制
q
输出 #1复制
Q
*/
#include <iostream>

using namespace std;

int main(){
	char a;
	cin >> a;
	a -= 32;
	cout << a;
	return 0;
}