/*
题目描述
在洛谷上使用团队系统非常方便的添加自己的题目。如果在自己的电脑上配置题目和测试数据，每题需要花费时间 5 分钟；而在洛谷团队中上传私有题目，每题只需要花费 3 分钟，但是上传题目之前还需要一次性花费 11 分钟创建与配置团队。现在要配置 n(n≤100) 道题目，如果本地配置花费的总时间短，请输出 Local，否则输出 Luogu。

输入格式
无

输出格式
无

输入输出样例
输入 #1复制
2
输出 #1复制
Local
输入 #2复制
50
输出 #2复制
Luogu
*/
#include <iostream>

using namespace std;

void shortest_time(int n){
	int time1 = 5 * n;
	int time2 = 11 + 3 * n;
	if(time1 < time2) cout << "Local";
	else cout << "Luogu";
}

int main(){
	int n;
	cin >> n;
	shortest_time(n);
	return 0;
}