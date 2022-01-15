/*
题目描述
输入一个不小于 100且小于 1000，同时包括小数点后一位的一个浮点数，例如 123.4，要求把这个数字翻转过来，变成 4.321并输出。

输入格式
一行一个浮点数

输出格式
一行一个浮点数

输入输出样例
输入 #1复制
123.4
输出 #1复制
4.321
*/
#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

//int main(){
//	char a, b, c, d;
//	scanf("%c%c%c.%c", &a, &b, &c, &d);
//	printf("%c.%c%c%c", d, c, b ,a);
//	return 0;
//}

int main(){
	string a;
	cin >> a;
	int len = a.size();
	for(int i = len - 1; i >= 0; i--) cout << a[i];
	return 0;
}