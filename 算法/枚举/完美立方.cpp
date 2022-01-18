#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	int n;
	cin >> n;
	for(int i = 2; i <= n; i++){
		for(int j = 2; j <= i-1; j++){
			for(int k = j; k <= i-1; k++){
				for(int l = k; l <= i-1; l++){
					if(i*i*i == j*j*j + k*k*k + l*l*l) printf("Cube = %d, Triple = (%d,%d,%d)\n", i, j, k, l);
				}
			}
		}
	}
	return 0;
}