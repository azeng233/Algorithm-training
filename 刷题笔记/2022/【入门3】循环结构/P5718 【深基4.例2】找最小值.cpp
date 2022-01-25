/*
题目描述
给出 n(n≤100) 和 n个整数

输入格式
无

输出格式
无

输入输出样例
输入 #1复制
8
1 9 2 6 0 8 1 7
输出 #1复制
0
*/
#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a, a+n);
	cout << a[0];
	return 0;
}