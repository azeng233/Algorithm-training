/*问题描述
　　给定一个正整数N，请你输出N以内（不包含N）的质数以及质数的个数。
输入格式
　　输入一行，包含一个正整数N。
输出格式
　　共两行。
　　第1行包含一个整数，表示N以内质数的个数。
　　第2行包含若干个素数，每两个素数之间用一个空格隔开，素数从小到大输出。
样例输入
10
样例输出
4
2 3 5 7
数据规模和约定
　　N<=1000
*/
#include <cstdio>
#include <iostream>
using namespace std;

bool isprime(int n){
	for(int i = 2;i < n; i++){
		if(n % i == 0){
			return false;
		}
	}
	return true;
}

int main(){
	int n;
	cin >> n;
	int cnt = 0, m = 0;
	int a[1001];
	for(int i = 2; i < n; i++){
		if(isprime(i)){
			a[m++] = i;
			cnt++;
		}
	}
	cout << cnt << endl;
	for(int i = 0; i < m; i++){
		cout << a[i] << " ";
	}
	
	return 0;
}
