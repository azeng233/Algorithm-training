/*问题描述
　　试计算在区间 1 到 n 的所有整数中，数字 x（0 ≤ x ≤ 9）共出现了多少次？例如，在 1到 11 中，即在 1、2、3、4、5、6、7、8、9、10、11 中，数字 1 出现了 4 次。
输入格式
　　输入文件名为 count.in。
　　输入共 1 行，包含 2 个整数 n、x，之间用一个空格隔开。
输出格式
　　输出文件名为 count.out。
　　输出共 1 行，包含一个整数，表示 x 出现的次数
*/
#include <cstdio>
#include <iostream>
using namespace std;
int main(){
	int n,x;
	cin >> n >> x;
	int cnt = 0,cmp;
	for(int i = 1; i <= n; i++){
		int m = i;
		do{
			cmp = m % 10;
			if(cmp == x) cnt++;
			m /= 10;
		}while(m != 0);
	}
	cout << cnt;
	return 0;
}
