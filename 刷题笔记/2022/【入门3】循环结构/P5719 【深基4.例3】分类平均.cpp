/*
题目描述
给定 n(n≤10000) 和k(k≤100)，将从 1 到 nn 之间的所有正整数可以分为两类：A 类数可以被 k 整除（也就是说是 kk 的倍数），而 B 类数不能。请输出这两类数的平均数，精确到小数点后 1 位，用空格隔开。

数据保证两类数的个数都不会是 0。

输入格式
无

输出格式
无

输入输出样例
输入 #1复制
100 16
输出 #1复制
56.0 50.1
*/
#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main(){
	int n, k;
	int ans = 0;
	cin >> n >> k;
	for(int i = k; i <= n; i += k)
		ans += i;
	printf("%.1f ", double(ans) / (n / k));
	ans = (1 + n) * n / 2 - ans;
	printf("%.1f", double(ans) / (n - n / k));
	return 0;
}