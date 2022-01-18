/*
题目描述
一些数字可能拥有以下的性质：

性质 1：是偶数；
性质 2：大于 4 且不大于 12。
小A 喜欢这两个性质同时成立的数字；Uim 喜欢这至少符合其中一种性质的数字；八尾勇喜欢刚好有符合其中一个性质的数字；正妹喜欢不符合这两个性质的数字。

输入格式
输入一个数字 x(0≤x≤1000)

输出格式
输出这 4 个人是否喜欢这个数字，如果喜欢则输出1，否则输出0，用空格分隔。

输入输出样例
输入 #1复制
12
输出 #1复制
1 1 0 0
*/
#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	int n;
	cin >> n;
	bool flag1 = false, flag2 = false;
	if(n % 2 == 0) flag1 = true;
	if(n > 4 && n <= 12) flag2 = true;
	int a = 0, b = 0, c = 0, d = 0;
	if(flag1 && flag2) a = 1;
	if(flag1 || flag2) b = 1;
	if((flag1 && !flag2) || (!flag1 && flag2)) c = 1;
	if(!flag1 && !flag2) d = 1;
	printf("%d %d %d %d", a, b, c, d);
	return 0;
}