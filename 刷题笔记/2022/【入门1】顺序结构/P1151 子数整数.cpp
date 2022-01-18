/*
题目描述
对于一个五位数a1a2a3a4a5,可将其拆分为三个子数：
sub1 = a1a2a3
sub2 = a2a3a4
sub3 = a3a4a5
现在给定一个正整数KK，要求你编程求出10000到30000之间所有满足下述条件的五位数，条件是这些五位数的三个子数sub1,sub2,sub3sub都可被K整除。
输入格式
一个正整数K

输出格式
每一行为一个满足条件的五位数，要求从小到大输出。不得重复输出或遗漏。如果无解，则输出“No”。
输入输出样例
输入 #1复制
15
输出 #1复制
22555
25555
28555
30000
说明/提示
0<K<1000
*/
#include <cstdio>

using namespace std;

bool search(int m, int k){
	int sub1, sub2, sub3;
	sub1 = m / 100;
	sub2 = m % 10000 / 10;
	sub3 = m % 1000;
	if(sub1 % k == 0 && sub2 % k == 0 && sub3 % k == 0) return true;
	else return false;
}

int main(){
	int k;
	bool flag = false;
	scanf("%d", &k);
	for (int i = 10000; i <= 30000; i++){
		if (search(i, k)){
			flag = true;
			printf("%d\n", i);
		}
	}
	if(!flag) printf("No");
	return 0;
}