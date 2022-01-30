/*
题目描述
《庄子》中说到，“一尺之棰，日取其半，万世不竭”。第一天有一根长度为 (a≤10<=9) 的木棍，从第二天开始，每天都要将这根木棍锯掉一半（每次除 2，向下取整）。第几天的时候木棍会变为 1？

输入格式
无

输出格式
无

输入输出样例
输入 #1复制
100
输出 #1复制
7
*/
#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	int ans = 0;
	cin >> n;
	while(n){
		n /= 2;
		ans++;
	}
	cout << ans;
	return 0;
}