/*问题描述
　　给出一个字符串S，然后给出q条指令，分别有4种：

　　1. Append str
　　表示在S的最后追加一个字符串str。
　　例：
　　原字符串：ABCDE
　　执行 Append FGHIJ 后
　　字符串变为：ABCDEFGHIJ

　　2. Insert x str
　　表示在位置x处插入一个字符串str。（输入保证0<x<=当前字符串长度）
　　例：
　　原字符串：ABCGHIJ
　　执行 Insert 4 DEF 后
　　字符串变为：ABCDEFGHIJ

　　3. Swap a b c d
　　表示交换从第a位到第b位的字符串与从第c位到第d位的字符串。（输入保证0<a<b<c<d<=当前字符串长度）
　　例：
　　原字符串：ABGHIFCDEJ
　　执行 Swap 3 5 7 9后
　　字符串变为：ABCDEFGHIJ

　　4. Reverse a b
　　表示将从第a位到第b位的字符串反转。（输入保证0<a<b<=当前字符串长度）
　　例：
　　原字符串：ABGFEDCHIJ
　　执行 Reverse 3 7 后
　　字符串变为：ABCDEFGHIJ

　　最后输出按顺序执行完指令后的字符串。
输入格式
　　输入第一行包含字符串S，第二行包含一个整数q，接下来q行分别为q个指令。
输出格式
　　输出为1行，为按顺序执行完输入指令后的字符串。
样例输入
My
5
Append Hello
Insert 3 dlroW
Reverse 3 7
Swap 3 7 8 12
Swap 1 2 3 7
样例输出
HelloMyWorld
样例说明
　　原字符串：My
　　执行 Append Hello 后：MyHello
　　执行 Insert 3 dlroW 后：MydlroWHello
　　执行 Reverse 3 7 后：MyWorldHello
　　执行 Swap 3 7 8 12 后：MyHelloWorld
　　执行 Swap 1 2 3 7 后：HelloMyWorld
*/
#include <cstdio>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	string a;
	cin >> a; //第一个输入的字符串 
	int n;
	cin >> n; //n条指令 
	string zl[n];
	for(int i = 0; i < n; i++){
		cin >>zl[i];
		if(zl[i] == "Append"){
			string xinzeng;
			cin >> xinzeng;
			a = a + xinzeng;
		}
		else if(zl[i] == "Insert"){
			int pos;
			string insert;
			cin >> pos >> insert; 
			int num1 = a.length();
			int num2 = insert.length();
			string s1,s2;
			s1 = a.substr(0,pos-1);
			s2 = a.substr(pos-1,num1-pos+1);
			a = s1 + insert + s2;
		}
		else if(zl[i] == "Swap"){
			int n1,n2,n3,n4;
			cin >> n1 >> n2 >> n3 >> n4;
			int num3 = a.length();
			string a1,a2,a3,a4,a5;
			a1 = a.substr(0,n1-1);
			a2 = a.substr(n1-1,n2-n1+1);
			a3 = a.substr(n2,n3-n2-1);
			a4 = a.substr(n3-1,n4-n3+1);
			a5 = a.substr(n4,num3-n4);
			a = a1 + a4 + a3 + a2 + a5;
		}
		else if(zl[i] == "Reverse"){
			int mm,nn;
			cin >> mm >> nn;
			string str1,str2;
			string str;
			int num4 = a.length();
			str1 = a.substr(0,mm-1);
			str2 = a.substr(nn,num4-nn);
			str = a.substr(mm-1,nn-mm+1);
			reverse(str.begin(),str.end());
			a = str1 + str + str2;
		}
	}
	cout << a;
	return 0;
} 
