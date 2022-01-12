/*问题描述
　　C语言数学库中用来计算x的y次幂的函数的定义如下： double pow( double x, double y)，用该函数用来做整数的幂运算不仅耗时多，结果也经常不够准确。
　　请你自己写一个计算整数x的y（y是非负整数）次幂的函数，该函数的定义如下：
　　int power( int x, int y );
输入格式
　　只写函数，不用考虑输入输出格式。
输出格式
　　函数中无需输出，只要将所求的的返回。
样例输入
10 2
样例输出
100
数据规模和约定
　　输入和计算结果都在int表示范围内。
*/
#include <cstdio>
#include <iostream>
using namespace std;

int ans = 1;

int power(int x, int y){
	for(int i = 1; i <= y; i++){
		ans *= x; 
	}
	return ans;
}

int main(){
	int m,n;
	cin >> m >> n;
	power(m,n);
	cout << ans;
	return 0;
} 
