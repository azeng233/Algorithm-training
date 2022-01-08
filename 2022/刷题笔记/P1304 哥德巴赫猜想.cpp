/*
题目描述
输入一个偶数 N(N<=10000)，验证4~N所有偶数是否符合哥德巴赫猜想：任一大于 2 的偶数都可写成两个质数之和。如果一个数不止一种分法，则输出第一个加数相比其他分法最小的方案。例如 10，10=3+7=5+5，则 10=5+5 是错误答案。

输入格式
第一行N

输出格式
4=2+2 6=3+3 …… N=x+y

输入输出样例
输入
10
输出
4=2+2
6=3+3
8=3+5
10=3+7
*/
#include <stdio.h>
#include <math.h>

bool isPrime(int m){
	for (int i = 2; i < m; i++){
		if (m % i == 0) return true;
	}
	return false;
}


int main(){
	int a;
	scanf("%d", &a);
	isPrime(a);
	return 0;
}
