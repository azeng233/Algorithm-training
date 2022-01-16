/*
计算三角形的面积，输入三个整数，输入这三个数字，计算三角形的面积，四舍五入精确到 1 位小数。公式：根号下p(p-a)(p-b)(p-c)
保证能构成三角形，每个边长输入时不超过2位小数。
输入格式
无

输出格式
无

输入输出样例
输入 #1复制
3 4 5
输出 #1复制
6.0
*/
#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

double triangle(double a, double b, double c){
	double p = (a + b + c) / 2;
	double s = sqrt(p * (p-a) * (p-b) * (p-c));
	return s;
}

int main(){
	double a, b, c;
	cin >> a >> b >> c;
	double s = triangle(a, b, c);
	printf("%.1lf", s);
	return 0;
}