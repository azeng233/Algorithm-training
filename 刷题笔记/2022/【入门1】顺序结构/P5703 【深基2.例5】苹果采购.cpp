/*
题目描述
现在需要采购一些苹果，每名同学都可以分到固定数量的苹果，并且已经知道了同学的数量，请问需要采购多少个苹果？

输入格式
输入两个不超过 10^910
9
  正整数，分别表示每人分到的数量和同学的人数。

输出格式
一个整数，表示答案。保证输入和答案都在int范围内的非负整数。

输入输出样例
输入 #1复制
5 3
输出 #1复制
15
*/
#include <iostream>

using namespace std;

int main(){
	int a, b;
	cin >> a >> b;
	cout << a * b;
	return 0;
}