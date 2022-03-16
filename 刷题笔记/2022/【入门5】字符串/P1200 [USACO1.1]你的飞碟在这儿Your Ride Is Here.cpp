// https://www.luogu.com.cn/problem/P1200
#include <iostream>
#include <cstdio>
#include <algorithm>
#define N 47

using namespace std;

int main(){
	string s1, s2;
	int num1 = 1, num2 = 1;
	cin >> s1 >> s2;
	for(int i = 0; i < s1.length(); i++){
		num1 *= s1[i] - '@';
	}
	for(int i = 0; i < s2.length(); i++){
		num2 *= s2[i] - '@';
	}
	if(num1 % N == num2 % N) cout << "GO";
	else cout << "STAY";
	return 0;
}
