/*
题目描述
给定一个整数，请将该数各个位上数字反转得到一个新数。新数也应满足整数的常见形式，即除非给定的原数为零，否则反转后得到的新数的最高位数字不应为零（参见样例2）。

输入格式
一个整数 N

输出格式
一个整数，表示反转后的新数。

输入输出样例
输入 #1复制
123
输出 #1复制
321
输入 #2复制
-380
输出 #2复制
-83
说明/提示
数据范围

−1,000,000,000≤N≤1,000,000,000。

noip2011普及组第一题
*/
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){
	int a;
	cin >> a;
	int temp, ans = 0;
	if(a < 0) cout << "-";
	a = abs(a);
	while(a){
		temp = a % 10;
		ans = ans * 10 + temp;
		a /= 10;
	}
	cout << ans;
	return 0;
}