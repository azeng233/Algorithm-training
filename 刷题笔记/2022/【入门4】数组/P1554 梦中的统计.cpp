// https://www.luogu.com.cn/problem/P1554
#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main(){
	int m, n;
	int num[10] = {0};
	cin >> m >> n;
	for(int i = m; i <= n; i++){
		int temp = i;
		while(temp){
			num[temp % 10]++;
			temp /= 10;
		}
	}
	for(int i = 0; i < 10; i++){
		cout << num[i] << " ";
	}
	return 0;
}