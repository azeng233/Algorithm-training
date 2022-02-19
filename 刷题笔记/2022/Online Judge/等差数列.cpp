// http://acm.hgnu.edu.cn/p/167
#include <iostream>
#include <algorithm>

using namespace std;

int gcd(int a, int b) {
    return b ? gcd(b, a % b) : a;
}

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a, a + n);
	int mina = a[1] - a[0];
	int maxa = (a[n - 1] - a[0]);
	for(int i = 0; i < n - 1; i++){
		int temp = a[i + 1] - a[i];
		mina = gcd(maxa, temp);
	}
	if(mina == 0) cout << n;
	else{
		int ans = maxa / mina + 1;
		cout << ans;
	}
	return 0;
}
