/*
题目描述
用高精度计算出 S = 1! + 2! + 3! + \cdots + n!S=1!+2!+3!+⋯+n!（n \le 50n≤50）。

其中“!”表示阶乘，例如：5! = 5 \times 4 \times 3 \times 2 \times 15!=5×4×3×2×1。

输入格式
一个正整数 nn。

输出格式
一个正整数 SS，表示计算结果。

输入输出样例
输入 #1复制
3
输出 #1复制
9
说明/提示
【数据范围】

对于 100 \%100% 的数据，1 \le n \le 501≤n≤50。

【其他说明】

注，《深入浅出基础篇》中使用本题作为例题，但是其数据范围只有 n \le 20n≤20，使用书中的代码无法通过本题。

如果希望通过本题，请继续学习第八章高精度的知识。
*/
#include <bits/stdc++.h>

using namespace std;

int jc(int x){
	long long temp = 2;
	for(int i = 3; i <= x; i++){
		temp *= i;
	}
	return temp;
}

int main(){
	int n;
	long long ans = 1;
	cin >> n;
	for(int i = 2; i <= n; i++){
		long long temp = jc(i);
		ans += temp;
	}
	cout << ans;
	return 0;
}