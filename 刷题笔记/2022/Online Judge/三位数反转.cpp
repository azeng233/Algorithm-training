// https://oj.zengchen233.cn/contest/2/problem/2
#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main(){
	int n;
	cin >> n;
	while(n){
		cout << n % 10;
		n /= 10;
	}
	return 0;
}