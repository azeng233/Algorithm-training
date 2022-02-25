// https://www.luogu.com.cn/problem/P1914
#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main(){
	int n;
	string s;
	cin >> n;
	cin >> s;
	for(int i = 0; i <= s.size(); i++){
		if(s[i] + n > 122) s[i] += n - 26; //当字符移动后超过z时从头开始数
		else s[i] += n;
	}
	cout << s;
	return 0;
}
