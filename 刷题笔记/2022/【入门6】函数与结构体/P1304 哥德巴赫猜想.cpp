#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>

using namespace std;

bool isPrime(int n){
	int temp = sqrt(n);
	if(n == 2) return true;
	for(int i = 2; i <= temp; i++){
		if(n % i == 0) return false;
	}
	return true;
}

int main(){
	int n;
	cin >> n;
	for(int i = 4; i <= n; i+=2){
		for(int j = 2; j <= i / 2; j++){
			if(isPrime(i - j) && isPrime(j)){
				printf("%d=%d+%d\n", i, j, i - j);
				break;
			}
		}
	}
	return 0;
}
