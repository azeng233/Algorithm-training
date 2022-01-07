/*问题描述
　　编写函数将十进制整数按8进制输出，然后编写main函数验证该函数。例如输入12，则输出为：12=014，输入32，则输出32=040。
输入格式
　　输入一个整数。
输出格式
　　输出这个整数的八进制形式。
样例输入
12
样例输出
014
数据规模和约定
　　输入的整数n>=0.
*/
#include <cstdio>
#include <iostream>
using namespace std;

int jz(int n){
	int a[10000];
	int pos = 0;
		do{
		a[pos ++] = n % 8;
		n /= 8;
	}while(n != 0);
	for(int i = pos - 1; i >= 0; i--){
		cout << a[i];
	}
}

int main(){
	int n;
	cin >> n;
	if(n>0){
		cout << "0"; 
		jz(n);
	}
	else{
		jz(n);
	}
	
	return 0;
}
