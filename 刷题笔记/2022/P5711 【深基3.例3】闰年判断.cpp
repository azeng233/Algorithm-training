/*
题目描述
输入一个年份（大于 1582 的整数 ），判断这一年是否是闰年，如果是输出 1，否则输出 0。

输入格式
无

输出格式
无

输入输出样例
输入 #1复制
1926
输出 #1复制
0
输入 #2复制
1900
输出 #2复制
0
输入 #3复制
2000
输出 #3复制
1
输入 #4复制
1996
输出 #4复制
1
*/
#include <iostream>

using namespace std;

bool isLeap(int year){
	if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) return true;
	else return false;
}

int main(){
	int year;
	cin >> year;
	if(isLeap(year)) cout << "1";
	else cout << "0";
	return 0;
}