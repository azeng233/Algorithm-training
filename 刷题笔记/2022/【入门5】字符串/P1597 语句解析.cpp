// https://www.luogu.com.cn/problem/P1597
#include <iostream>
#include <cstdio>
#include <cstring>
#include <map>
#include <algorithm>

using namespace std;

string s;
map <char,int> num;

int main(){
	num['a']=num['b']=num['c']='0';
	cin >> s;
	for(int i = 0; i < s.size(); i += 5){
		if(s[i + 3] >= '0' && s[i + 3] <= '9'){
			num[s[i]] = s[i + 3];			// a:=3;b:=4;c:=5;
		}
		else{
			num[s[i]] = num[s[i + 3]];	//当不属于数字的时候就两个变量相互赋值
		}
	}
	printf("%c %c %c", num['a'], num['b'], num['c']);
	return 0;
}

