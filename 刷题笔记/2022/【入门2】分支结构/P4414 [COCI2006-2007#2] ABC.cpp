/*
题意翻译
【题目描述】

三个整数分别为 A,B,C。这三个数字不会按照这样的顺序给你，但它们始终满足条件：A < B < C。为了看起来更加简洁明了，我们希望你可以按照给定的顺序重新排列它们。

【输入格式】

第一行包含三个正整数 A,B,C，不一定是按这个顺序。这三个数字都小于或等于 100。第二行包含三个大写字母 A、B 和 C（它们之间没有空格）表示所需的顺序。

【输出格式】

在一行中输出 A，B 和 C，用一个 （空格）隔开。

输入输出样例
输入 #1复制
1 5 3
ABC
输出 #1复制
1 3 5
输入 #2复制
6 4 2
CAB
输出 #2复制
6 2 4
*/
#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main(){
	int num[3];
	char ch[3];

	for(int i = 0; i < 3; i++){
        cin >> num[i];
    }

    for(int i = 0; i < 3; i++){
        cin >> ch[i];
    }

	sort(num, num+3);

	for(int i = 0; i < 3; i++)
		cout << num[ch[i] - 'A'] << " ";

	return 0;
}