/*
题目描述
八尾勇喜欢吃苹果。她现在有 m(m≤100) 个苹果，吃完一个苹果需要花费 t(0≤t≤100) 分钟，吃完一个后立刻开始吃下一个。现在时间过去了s(s≤10000) 分钟，请问她还有几个完整的苹果？

输入格式
输入三个非负整数表示 m 、t 和 s。

输出格式
输出一个整数表示答案。

如果你出现了 RE，不如检查一下被零除？

输入输出样例
输入 #1复制
50 10 200
输出 #1复制
30
*/
#include <iostream>
#include <cstdio>

using namespace std;

int rest_apple(int m, int t, int s){
	int ans;
	if(t == 0) {
		ans = 0;
		return ans;
	}
	if(s % t != 0){
		ans = max(m - s / t - 1, 0);
	} else {
		ans = max(m - s / t, 0);
	}
	return ans;
}

int main(){
	int m, t, s;
	cin >> m >> t >> s;
	int ans = rest_apple(m, t, s);
	cout << ans;
	return 0;
}