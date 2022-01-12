/*问题描述
　　编写一个程序，输入10个数，确定和打印其中最大数
输入格式
　　输入1行，包括10个数
输出格式
　　输出1行，输出10个数中的最大数
样例输入
1 2 3 4 5 6 7 8 9 10
样例输出
10
数据规模和约定
　　输入数据约定为整形数据
*/
#include <cstdio>
#include <iostream>

using namespace std;

int main(){
	int a[10];
	for(int i = 0; i < 10; i++){
		cin >> a[i];
	}
	for(int i = 0; i < 9; i++){
		for(int j = i + 1; j < 10; j++){
			if(a[i] > a[j]){
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	cout << a[9];
	return 0;
}
