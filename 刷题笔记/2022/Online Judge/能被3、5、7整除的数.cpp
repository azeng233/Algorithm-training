// https://oj.zengchen233.cn/contest/2/problem/4
#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main(){
	int n;
	cin >> n;
	if(n % 3 != 0 && n % 5 != 0 && n % 7 != 0){
		cout << "n";
		return 0;
	}
	if(n % 3 == 0 && n % 5 == 0 && n % 7 == 0){
		cout << "3 5 7";
		return 0;
	}
	else{
		if(n % 3 == 0) cout << "3 ";
		if(n % 5 == 0) cout << "5 ";
		if(n % 7 == 0) cout << "7 ";
	}
	return 0;
}