/*
题目描述
伦敦奥运会要到了，小鱼在拼命练习游泳准备参加游泳比赛，可怜的小鱼并不知道鱼类是不能参加人类的奥运会的。

这一天，小鱼给自己的游泳时间做了精确的计时（本题中的计时都按24小时制计算），它发现自己从a时b分一直游泳到当天的c时d分，请你帮小鱼计算一下，它这天一共游了多少时间呢？

小鱼游的好辛苦呀，你可不要算错了哦。

输入格式
一行内输入 4 个整数，分别表示 a, b, c, d。

输出格式
一行内输出 2 个整数 e 和 f，用空格间隔，依次表示小鱼这天一共游了多少小时多少分钟。其中表示分钟的整数f应该小于60。

输入输出样例
输入
12 50 19 10
输出
6 20
说明/提示
对于全部测试数据，0<=a,c<=24,0<=b,d<=60 且结束时间一定晚于开始时间。
*/
#include <stdio.h>

void sj(int hour1, int min1, int hour2, int min2){
	int hour, minute;
	if(hour1 == hour2){
		hour = 0;
		minute = min2 - min1;
	} else {
		if(min1 <= min2){
			hour = hour2 - hour1;
			minute = min2 - min1;
		} else {
			hour = hour2 - hour1 - 1;
			minute = min2 - min1 + 60;
		}
	}
	printf("%d %d", hour, minute);
}

int main(){
	int hour1, hour2, min1, min2;
	scanf("%d %d %d %d", &hour1, &min1, &hour2, &min2);
//	printf("%d %d %d %d\n", hour1, min1, hour2, min2);
	sj(hour1, min1, hour2, min2);
	return 0;
}