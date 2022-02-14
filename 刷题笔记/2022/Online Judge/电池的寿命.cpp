// https://oj.zengchen233.cn/contest/2/problem/3
#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main(){
	long long n;
	int maxa = 0;
	double ans = 0;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
		maxa = max(maxa, a[i]);
	}

	if(n == 2){
		ans = min(a[0], a[1]);
		printf("%.1lf", ans);
		return 0;
	}
	else{
		for(int i = 0; i < n; i++){
			ans += a[i];
		}
		if(maxa > ans - maxa) printf("%.1lf", ans - maxa);
		else printf("%.1lf", ans/2);
	}
	return 0;
}