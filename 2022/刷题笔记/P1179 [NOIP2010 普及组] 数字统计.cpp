/*
题目描述
请统计某个给定范围[L,R]的所有整数中，数字 22 出现的次数。

比如给定范围[2,22]，数字2在数2中出现了1次，在数12中出现1次，在数 20中出现1次，在数 21 中出现 1次，在数 22中出现2次，所以数字2在该范围内一共出现了6次。
输入格式
22个正整数 LL 和 RR，之间用一个空格隔开。

输出格式
数字 22出现的次数。

输入输出样例
输入 
2 22
输出 
6
输入 
2 100
输出 
20
说明/提示
1 ≤L ≤R ≤100000
*/
#include <stdio.h>

int search(int m, int n){
	int count = 0;
	for (int i = m; i <= n; i++){
		int temp = i;
		while (temp != 0){
			if (temp % 10 == 2) count++;
			temp /= 10;
		}
	}
	return count;
}

int main(){
	int m, n;
	scanf("%d %d", &m, &n);
	int count = search(m, n);
	printf("%d", count);
	return 0;
}
