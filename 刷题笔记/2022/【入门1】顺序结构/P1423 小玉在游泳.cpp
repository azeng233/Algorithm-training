/*
题目描述
小玉开心的在游泳，可是她很快难过的发现，自己的力气不够，游泳好累哦。已知小玉第一步能游2米，可是随着越来越累，力气越来越小，她接下来的每一步都只能游出上一步距离的98%。现在小玉想知道，如果要游到距离x米的地方，她需要游多少步呢。请你编程解决这个问题。

输入格式
输入一个数字（不一定是整数，小于100m），表示要游的目标距离。

输出格式
输出一个整数，表示小玉一共需要游多少步。

输入输出样例
输入
4.3
输出
3
*/
#include <iostream>

using namespace std;

int main(){
	int m = 2, count = 1;
	float mm;
	float ans = 2;
	float temp = m;
	cin >> mm;
	do{
		temp *= 0.98;
		ans += temp;
		count++;
	} while(ans <= mm);
	cout << count;
	return 0;
}