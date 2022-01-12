/*问题描述
　　给定L,R。统计[L,R]区间内的所有数在二进制下包含的“1”的个数之和。
　　如5的二进制为101，包含2个“1”。
输入格式
　　第一行包含2个数L,R
输出格式
　　一个数S，表示[L,R]区间内的所有数在二进制下包含的“1”的个数之和。
样例输入
2 3
样例输出
3
数据规模和约定
　　L<=R<=100000;
*/
#include <cstdio>
#include <iostream>

using namespace std;

int sum = 0;

void print(int *a, int len){
	for(int i = 0; i < len; i++){
		if(a[i] == 1){
			sum ++;
		}
	}
}

void change(int n){ //十进制转化为二进制 
	int a[10000];
	int pos = 0;
	do{
		a[pos ++] = n % 2;
		n /= 2;
	}while(n != 0);
	print(a,pos); //打印1的个数 
}

int main(){
	int l,r;
	cin >> l >> r;
	for(int i = l; i <= r; i++){
		change(i);
	} 
	cout << sum;
	return 0;
}
