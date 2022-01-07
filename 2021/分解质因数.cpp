/*问题描述
　　给定一个正整数n，尝试对其分解质因数
输入格式
　　仅一行，一个正整数，表示待分解的质因数
输出格式
　　仅一行，从小到大依次输出其质因数，相邻的数用空格隔开
样例输入
100
样例输出
2 2 5 5
数据规模和约定
　　n<=2147483647
*/ 
#include <cstdio>
#include <cmath>
#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	if(n == 1){
		cout << n;
	}
	else{
		for(int i = 2; i <= sqrt(n); i++){
			if(n % i == 0){
				printf("%d ",i);
				n /= i;
				i = 0;
			}
		}	
		if(n) cout << n;
	}
	return 0;
} 
