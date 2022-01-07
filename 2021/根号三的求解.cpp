/*问题描述
　　进行数学运算是计算机的主要能力，利用计算机的重复计算能力可以帮助人们求解一些十分复杂的数学运算，比如高次方程、求根，求平方等。
	根号运算是数学的基本运算，对于无理数的求解，我们可以使用两边取值，不断逼近的方法进行求解。现要求你编程实现根号3的求解。
输入格式
　　无输入
输出格式
　　输出根号3的求解结果
样例输入
无
样例输出
无
数据规模和约定
　　初始边界值分别为：low=1.0，high=2.0，更新边界值使用平均数，并要求循环20次后输出结果。
*/
#include <cstdio>
#include <cmath>
#include <iostream>
using namespace std;
int main(){
	double low = 1.0;
	double high = 2.0;
	double average = 0,ans;
	for(int i = 0; i < 20; i++){
		average = (low + high) / 2;
		ans = pow(average,2);
		if(ans > 3) high = average;
		else low = average;
	}	
	cout << average;
	return 0;
}
