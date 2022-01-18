/*
题目描述
班主任给小玉一个任务，到文具店里买尽量多的签字笔。已知一只签字笔的价格是 11 元 99 角，而班主任给小玉的钱是 aa 元 bb 角，小玉想知道，她最多能买多少只签字笔呢。

输入格式
输入只有一行两个整数，分别表示 a和 b

输出格式
输出一行一个整数，表示小玉最多能买多少只签字笔。

输入输出样例
输入 #1复制
10 3
输出 #1复制
5
*/
#include <iostream>

using namespace std;

int main(){
	int a, b;
	const float value = 1.9;
	cin >> a >> b;
	float temp = a + 0.1 * b;
	int m = temp / value;
	cout << m;
	return 0;
}