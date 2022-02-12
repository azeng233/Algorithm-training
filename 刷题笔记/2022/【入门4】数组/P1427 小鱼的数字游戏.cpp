// https://www.luogu.com.cn/problem/P1427
#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main(){
	long long a[101];
	int temp;
	for(int i = 0;; i++){
		cin >> a[i];
		if(a[i] == 0){
			temp = i;
			break;
		}
	}
	for(int i = temp - 1; i >= 0; i--) cout << a[i] << " ";
	system("pause");
	return 0;
}