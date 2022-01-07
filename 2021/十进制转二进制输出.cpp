/*问题描述
　　编写递归函数，实现将一个十进制的正整数以二进制的形式输出。
　　注：不考虑符号位，仅从二进制数不为0的最高位开始输出。
输入格式
　　一个十进制正整数
输出格式
　　该整数对应的二进制数
样例输入
一个满足题目要求的输入范例。
例：
96
样例输出
与上面的样例输入对应的输出。
例：
1100000
*/
#include <bits/stdc++.h> 

using namespace std;

int main(){
	int n;
	cin >> n;
	int pos = 0;
	int a[10000];
	do{
		a[pos ++] = n % 2;
		n /= 2;
	}while(n != 0);
	for(int i = pos - 1; i >= 0; i--){
		cout << a[i];
	}
	return 0;
}
