// https://www.luogu.com.cn/problem/P5727
#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main(){
	int n;
	cin >> n;
	int a[1000] = {0};
	int i = 1;
	int temp;
	a[0] = n;
	while(n != 1){
		if(n % 2 == 0){	//偶数
			n /= 2;
			a[i++] = n;
		}
		else{	//奇数
			n = n * 3 + 1;
			a[i++] = n;
		}
	}
	for(int j = i-1; j >= 0; j--){
		cout << a[j] << " ";
	}
	return 0;
}