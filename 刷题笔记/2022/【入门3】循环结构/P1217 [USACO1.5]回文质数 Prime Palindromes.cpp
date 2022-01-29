/*
题目描述
因为 151 既是一个质数又是一个回文数（从左到右和从右到左是看一样的），所以 151 是回文质数。

写一个程序来找出范围 [a,b](5≤a<b≤100,000,000)( 一亿)间的所有回文质数。

输入格式
第 1 行: 二个整数 a 和 b .

输出格式
输出一个回文质数的列表，一行一个。

输入输出样例
输入 #1复制
5 500
输出 #1复制
5
7
11
101
131
151
181
191
313
353
373
383
*/
#include <bits/stdc++.h>

using namespace std;

int huiwen(int x){
	int count = 0;
	int temp = x;
	while(x){
		count = count * 10 + x % 10;
		x /= 10;
	}
	if(count == temp) return 1;
	return 0;
}

int isPrime(int n){
	int k = sqrt(n);
	for(int i = 2; i <= k; i++){
		if(n % i == 0) return 0;
	}
	return 1;
}

int main(){
	int a, b;
	cin >> a >> b;
	if(a % 2 == 0) a++;
	if(b >= 9989899) b = 9989899;
	for(int i = a; i <= b; i+=2){
		if(huiwen(i) && isPrime(i)) cout << i << endl;
	}
	return 0;
}