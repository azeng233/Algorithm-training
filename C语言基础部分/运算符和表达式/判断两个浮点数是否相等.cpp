#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
	float f = 123.456;	//float有效位数为7位
//	if(f == 123.456) cout << "yes";
//	else cout << "no";
	if(f - 123.456 > -0.0001 && f - 123.456 < 0.0001) cout << "yes";
	else cout << "no";
	return 0;
}