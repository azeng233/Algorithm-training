/*问题描述
　　求出所有的“水仙花数”。所谓的“水仙花数”，是指一个3位数，其各位数字的立方和等于该数本身。
输入格式
　　程序使用for循环遍历所有三位数整数，不需要手动输入
输出格式
　　遇到水仙花数输出
样例输入
无输入
样例输出
例：
153
370
371
407
数据规模和约定
　　输入数据中每一个数的范围。
　　例：100~999
*/
#include <cstdio>
#include <iostream>

using namespace std;

int main(){
	int a,b,c;
	for(int i = 100; i < 1000; i++){
		a = i % 10; // 个位
		b = i % 100 / 10;
		c = i / 100;
		if(a*a*a + b*b*b + c*c*c == i) cout << i << endl;
	}
	return 0;
} 
