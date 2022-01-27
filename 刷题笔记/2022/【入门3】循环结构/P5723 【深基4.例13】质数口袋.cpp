/*
题目描述
小 A 有一个质数口袋，里面可以装各个质数。他从 22 开始，依次判断各个自然数是不是质数，如果是质数就会把这个数字装入口袋。口袋的负载量就是口袋里的所有数字之和。但是口袋的承重量有限，不能装得下总和超过1到10的5次方的质数。给出 L，请问口袋里能装下几个质数？将这些质数从小往大输出，然后输出最多能装下的质数个数，所有数字之间有一空行。

输入格式
一行一个正整数 LL。

输出格式
将这些质数从小往大输出，然后输出最多能装下的质数个数，所有数字之间有一空行。

输入输出样例
输入 #1复制
100
输出 #1复制
2
3
5
7
11
13
17
19
23
9
*/
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int isPrime(int n){
	int k = sqrt(n);
	for(int i = 2; i <= k; i++){
		if(n % i == 0) return 0;
	}
	return 1;
}

int main(){
	int n;
	int ans = 0, count = 1;
	cin >> n;

	if(n < 2){
		cout << "0\n";
		return 0;
	}
	else if(n == 2){
		cout << "2\n";
		cout << "1";
		return 0;
	}

	cout << "2" << endl;

	for(int i = 3; i <= n; i++){
		if(i % 2 == 0) continue;
		if(ans + i > n) {
			cout << count << endl;
			return 0;
		}
		if(isPrime(i)){
			cout << i << endl;
			count++;
			ans += i;
		}
	}
	return 0;
}