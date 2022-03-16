// https://www.luogu.com.cn/problem/P5739
#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main(){
	int n;
	long long ans = 1;
	cin >> n;
	for(int i = 2; i <= n; i++){
		ans *= i;
	}
	cout << ans;
	return 0;
}
