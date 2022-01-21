#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int gcd(int a, int b){
	int r = a % b;
	while(r != 0){
		a = b;
		b = r;
		r = a % b;
	}
	return b;
}

int main(){
	int a, b;
	cin >> a >> b;
	int c = gcd(a, b);
	cout << c;
	return 0;
}