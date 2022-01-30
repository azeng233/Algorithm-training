/*
题目描述
给出n(1≤n≤13)，请输出一个直角边长度是 nn 的数字直角三角形。所有数字都是 2 位组成的，如果没有 2 位则加上前导 0。

输入格式
无

输出格式
无

输入输出样例
输入 #1复制
5
输出 #1复制
0102030405
06070809
101112
1314
15
*/
#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	int m = n;
	int t = 1;
	for(int i = 0; i < n; i++){		//i行
		for(int j = 0; j < m; j++){	//j列
			printf("%02d", t);
			t++;
		}
		m--;						//这里列减少1
		cout << endl;
	}
	return 0;
}