/*
题目描述
输入一组勾股数 a,b,c三三都不想等，用分数格式输出其较小锐角的正弦值。（要求约分。）

输入格式
一行，包含三个正整数，即勾股数 a,b,c（无大小顺序）。

输出格式
一行，包含一个分数，即较小锐角的正弦值

输入输出样例
输入 #1复制
3 5 4
输出 #1复制
3/5
说明/提示
数据保证：a,b,ca,b,c 为正整数且 ∈[1,10^9]
 ]。
*/
#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int gcd(int a, int b){
	int r = a % b;
	while(r != 0){
		a = b;
		b = r;
		r = a % b;
	}
	return b;
}

int main(){
	int a[3];
	cin >> a[0] >> a[1] >> a[2];
	sort(a, a+3);
	cout << a[0]/gcd(a[0], a[2]) << "/" << a[2]/gcd(a[0], a[2]);
	return 0;
}