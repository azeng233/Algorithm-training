/*问题描述
　　从键盘输入一个字符，如果是大写字母（A-Z），就转换成小写；如果是小写字母（a-z），就转换成大写，如果是其他字符原样保持并将结果输出。
输入格式
　　输入一行，包含一个字符。
输出格式
　　输出一行，即按照要求输出的字符。
样例输入
a
样例输出
A
*/
#include <cstdio>
#include <iostream>
#include <ctype.h>
using namespace std;
int main(){
	char c;
	cin >> c;
	if(c >= 'a' && c <= 'z'){
		c = toupper(c);
	}else if(c >= 'A' && c <= 'Z'){
		c = tolower(c);
	}else{
		c = c;
	}
	cout << c;
	return 0;
} 
