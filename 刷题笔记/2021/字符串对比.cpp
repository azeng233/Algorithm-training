/*问题描述
　　给定两个仅由大写字母或小写字母组成的字符串(长度介于1到10之间)，它们之间的关系是以下4中情况之一：
　　1：两个字符串长度不等。比如 Beijing 和 Hebei
　　2：两个字符串不仅长度相等，而且相应位置上的字符完全一致(区分大小写)，比如 Beijing 和 Beijing
　　3：两个字符串长度相等，相应位置上的字符仅在不区分大小写的前提下才能达到完全一致（也就是说，它并不满足情况2）。比如 beijing 和 BEIjing
　　4：两个字符串长度相等，但是即使是不区分大小写也不能使这两个字符串一致。比如 Beijing 和 Nanjing
　　编程判断输入的两个字符串之间的关系属于这四类中的哪一类，给出所属的类的编号。
输入格式
　　包括两行，每行都是一个字符串
输出格式
　　仅有一个数字，表明这两个字符串的关系编号
*/
#include <cstdio>
#include <iostream>
#include <cstring>
#include <ctype.h>

using namespace std;

int dx(char *a, char *b){ // 大小写转换 
	for(int i = 0; i < strlen(a); i++){
		a[i] = tolower(a[i]);
		b[i] = tolower(b[i]);
	}
	if(strcmp(a,b) == 0) return 1;
	return 0;
}

int main(){
	char s1[10],s2[10];
	cin >> s1 >> s2;
	int flag;
	if(strlen(s1) != strlen(s2)){
		flag = 1;
	} else if (strcmp(s1,s2) == 0){
		flag = 2;
	} else if (dx(s1,s2)){
		flag = 3;
	} else {
		flag = 4;
	}
	cout << flag << endl;
	return 0;
}
