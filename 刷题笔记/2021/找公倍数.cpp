/*问题描述
　　这里写问题描述。
　　打印出1-1000所有11和17的公倍数。
*/
#include <bits/stdc++.h>

using namespace std;

int main(){
	for(int i = 11 * 17; i <= 1000; i++){
		if(i % 11 == 0 && i % 17 == 0){
			cout << i <<endl;
		}
	}
	return 0;
} 
