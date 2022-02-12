// https://www.luogu.com.cn/problem/P1980
#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main(){
	long long n, x;
	long long ans = 0;
	cin >> n >> x;
	for(long long i = 1; i <= n; i++){
		long long temp = i;
		while(temp){
			if(x == temp % 10) ans++;
			temp /= 10;
		}
	}
	cout << ans;
	return 0;
}
