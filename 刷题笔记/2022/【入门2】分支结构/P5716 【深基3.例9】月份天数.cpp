/*
题目描述
输入年份和月份，输出这一年的这一月有多少天。需要考虑闰年。

输入格式
无

输出格式
无

输入输出样例
输入 #1复制
1926 8
输出 #1复制
31
输入 #2复制
2000 2
输出 #2复制
29
*/
#include <iostream>
#include <cstdio>

using namespace std;

bool isLeap(int year){
	if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) return true;
	else return false;
}

int main(){
	int year, month, day;
	int a[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
	cin >> year >> month;
	if(isLeap(year)){
		a[2] = 29;
		cout << a[month];
	} else {
		cout << a[month];
	}
	return 0;
}