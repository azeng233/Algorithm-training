// https://www.luogu.com.cn/problem/P1428
#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main(){
	int n;
	cin >> n;
	int ans = 0;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	for(int i = 0; i < n; i++){
		for(int j = i; j >= 0; j--){
			if(a[j] < a[i]) ans++;
		}
		cout << ans << " ";
		ans = 0;
	}
	return 0;
}