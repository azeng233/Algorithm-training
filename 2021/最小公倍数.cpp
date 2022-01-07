#include <cstdio>
#include <iostream>

using namespace std;

int lcm(int a, int b){
	int r;
	int m = a, n = b;
	do {
   	 r = a % b;
   	 a = b;
   	 b = r;
	}while(r != 0);
	int sum;
	sum = m * n / a;
	cout << sum;
}

int main(){
	int a,b;
	cin >> a >> b;
	lcm(a,b);
	return 0;
} 
