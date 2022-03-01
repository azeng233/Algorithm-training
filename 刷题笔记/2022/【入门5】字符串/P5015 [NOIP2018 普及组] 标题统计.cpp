// https://www.luogu.com.cn/problem/P5015
#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main(){
	string s;
	int ans = 0;
	getline(cin, s);
	for(int i = 0; i < s.length(); i++){
		if(s[i] != ' ' && s[i] != '\n') ans++;
		else continue;
	}
	cout << ans;
	return 0;
}
