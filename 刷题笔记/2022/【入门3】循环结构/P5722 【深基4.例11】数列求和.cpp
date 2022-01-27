/*
题目描述
计算1+2+3+⋯+(n−1)+n 的值，其中正整数 n不大于 100。由于你没有高斯聪明，所以你不被允许使用等差数列求和公式直接求出答案。

输入格式
无

输出格式
无

输入输出样例
输入 #1复制
100
输出 #1复制
5050
*/
#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main(){
	int n;
	cin >> n;
	int ans = (1 + n) * n / 2;
	cout << ans;
	return 0;
}