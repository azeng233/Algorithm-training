/*
题目描述
给出三条线段a,b,c 的长度，均是不大于 10000 的整数。打算把这三条线段拼成一个三角形，它可以是什么三角形呢？

如果三条线段不能组成一个三角形，输出Not triangle；
如果是直角三角形，输出Right triangle；
如果是锐角三角形，输出Acute triangle；
如果是钝角三角形，输出Obtuse triangle；
如果是等腰三角形，输出Isosceles triangle；
如果是等边三角形，输出Equilateral triangle。
如果这个三角形符合以上多个条件，请按以上顺序分别输出，并用换行符隔开。

输入格式
无

输出格式
无

输入输出样例
无

说明/提示
当两短边的平方和大于一长边的平方，说明是锐角三角形。

当两短边的平方和等于一长边的平方，说明是直角三角形。

当两短边的平方和小于一长边的平方，说明是钝角三角形。
*/
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){
	int a[3];
	for(int i = 0; i < 3; i++){
		cin >> a[i];
	}
	sort(a, a+3);	//sort是从地0个开始到末尾+1
	if(a[0] + a[1] <= a[2]) {
		cout << "Not triangle";
		return 0;
	}

	if (pow(a[0],2) + pow(a[1],2) == pow(a[2],2)) cout << "Right triangle" << endl;
	else if (pow(a[0],2) + pow(a[1],2) > pow(a[2],2)) cout << "Acute triangle" << endl;
//	else if (pow(a[0],2) + pow(a[1],2) < pow(a[2],2)) cout << "Obtuse triangle" << endl;
	else cout << "Obtuse triangle" << endl;
	if(a[0] == a[1] || a[1] == a[2] || a[2] == a[0]) cout << "Isosceles triangle" << endl;
	if(a[0] == a[1] && a[1] == a[2]) cout << "Equilateral triangle" << endl;
	return 0;
}