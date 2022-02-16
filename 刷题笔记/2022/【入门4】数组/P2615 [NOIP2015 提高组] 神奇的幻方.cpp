// https://www.luogu.com.cn/problem/P2615
#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main(){
	int a[40][40];
	int n, temp;
	int x, y;
	cin >> n;

	for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
            a[i][j] = 0;

	temp = n * n;
	x = 1;
	y = (n + 1) / 2;
	for(int i = 1; i <= temp; i++){
		a[x][y] = i;
		if(x == 1 && y != n){
			x = n;
			y = y + 1;
			continue;
		}
		if(y == n && x != 1){
			x = x - 1;
			y = 1;
			continue;
		}
		if(x == 1 && y == n){
			x = x + 1;
			continue;
		}
		if(x != 1 && y != n){
			if(a[x - 1][y + 1] == 0){
				x = x - 1;
				y = y + 1;
				continue;
			}
			else{
				x = x + 1;
			}
			continue;
		}
	}
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}