// https://www.luogu.com.cn/problem/P2550
#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int ans[8] = {0};
int a[8], b[1004][8];

int main(){
	int n;
	cin >> n;

	for(int i = 1; i < 8; i++){
		cin >> a[i];
	}

	for(int i = 1; i <= n; i++){
		for(int j = 1; j < 8; j++){
			cin >> b[i][j];
		}
	}

	int count = 0;

	for(int i = 1; i <= n; i++){
		for(int j = 1; j < 8; j++){
			for(int k = 1; k < 8; k++){
				if(b[i][j] == a[k]) count++;
			}
		}
		ans[7 - count]++;
		count = 0;
	}

	for(int i = 0; i < 7; i++){
		cout << ans[i] << " ";
	}

	return 0;
}