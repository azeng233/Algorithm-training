/*
题目描述
给出三个整数 a,b,c(0≤a,b,c≤100)，要求把这三位整数从小到大排序。

输入格式
无

输出格式
无

输入输出样例
输入 #1复制
1 14 5
输出 #1复制
1 5 14
输入 #2复制
2 2 2
输出 #2复制
2 2 2
*/
#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main(){
	int a[3];
	cin >> a[0] >> a[1] >> a[2];
	sort(a,a+3);
	cout << a[0] << " " << a[1] << " " << a[2];
	return 0;
}