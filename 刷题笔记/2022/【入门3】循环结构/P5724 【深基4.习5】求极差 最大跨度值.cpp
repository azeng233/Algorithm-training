/*
题目描述
给出 n(n≤100) 和 n个整数(0≤ai≤1000)，求这 n个整数中的极差是什么。极差的意思是一组数中的最大值减去最小值的差。

输入格式
无

输出格式
无

输入输出样例
输入 #1复制
6
1 1 4 5 1 4
输出 #1复制
4
*/
#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a, a+n);
	cout << a[n-1] - a[0];
	return 0;
}