// https://www.luogu.com.cn/problem/P1765
#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

string s;

int main(){
	int num[26]={1, 2, 3, 1, 2, 3, 1, 2, 3, 1, 2, 3, 1, 2, 3, 1, 2, 3, 4, 1, 2, 3, 1, 2, 3, 4};
	int ans = 0;
	getline(cin, s);
	for(int i = 0; i < s.size(); i++){
		if(s[i] >= 'a' && s[i] <= 'z'){
			ans += num[s[i] - 'a'];
		}
		if(s[i] == ' ') ans++;
	}
	cout << ans;
	return 0;
}
