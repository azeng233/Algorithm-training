/*问题描述
　　从键盘输入一个不超过8位的正的十六进制数字符串，将它转换为正的十进制数后输出。
　　注：十六进制数中的10~15分别用大写的英文字母A、B、C、D、E、F表示。
样例输入
FFFF
样例输出
65535
*/
#include <cstdio>
#include <cstring>
#include <cmath>
#include <iostream>

using namespace std;

int main(){
	string a;
	cin >> a;
	long long sum = 0;
	int  b;
	for(int i = 0; i < a.length(); i++){
		switch(a[i]){
			case 'A': b = 10; break;
			case 'B': b = 11; break;
			case 'C': b = 12; break;
			case 'D': b = 13; break;
			case 'E': b = 14; break;
			case 'F': b = 15; break;
			default: b = a[i] - '0'; break;
		}
		sum = sum + b * pow(16,(a.length() - i - 1));
	}
	cout << sum << endl;
	return 0;
} 
