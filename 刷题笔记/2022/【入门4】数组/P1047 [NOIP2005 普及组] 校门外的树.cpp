// https://www.luogu.com.cn/problem/P1047
#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main(){
	int l, m;
	int u, v;
	int ans = 0;
	cin >> l >> m;
	int a[10001];
	for(int i = 0; i <= l; i++){
		a[i] = 1;
	}
	for(int i = 0; i < m; i++){
		cin >> u >> v;
		for(int j = u; j <= v; j++) a[j] = 0;
	}
	for(int i = 0; i <= l; i++){
		if(a[i] == 1) ans++;
	}
	cout << ans;
	return 0;
}
