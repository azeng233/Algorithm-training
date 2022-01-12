/*问题描述
　　输入一个小写字符串，按从小到大的顺序输出。
输入格式
　　bcaed
输出格式
　　abcde
　　顶格输出，中间没有空格
样例输入
一个满足题目要求的输入范例。
例：
bcaed
样例输出
与上面的样例输入对应的输出。
例：
abcde
数据规模和约定
　　输入数据中每一个数的范围。
　　例：0<n,m<100, 0<=矩阵中的每个数<=1000。
*/
#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	char a[2000];
	cin >> a;
	int len = strlen(a);
	sort(a,a+len);
	cout << a;
	return 0;
}
