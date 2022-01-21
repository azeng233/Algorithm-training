/*
题目背景
题目描述
有一只小鱼，它平日每天游泳 250 公里，周末休息（实行双休日)，假设从周x(1≤x≤7) 开始算起，过了 n(n≤10的六次方) 天以后，小鱼一共累计游泳了多少公里呢？

输入格式
输入两个整数x,n(表示从周x算起，经过n天）。

输出格式
输出一个整数，表示小鱼累计游泳了多少公里。

输入输出样例
输入 #1复制
3 10
输出 #1复制
2000
*/
#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	int a, b;
	long long ans = 0;
	cin >> a >> b;
	for(int i = 1; i <= b; i++){
		if(a != 6 && a != 7){
			ans += 250;
		}
		if(a == 7) a = 1;	//如果是星期天就置为星期一并开始下一次循环
		else a++;
	}
	cout << ans;
	return 0;
}