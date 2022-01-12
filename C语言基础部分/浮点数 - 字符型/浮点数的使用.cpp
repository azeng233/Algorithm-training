#include <stdio.h>

int main(){
	int i = 123;  //十进制
	int j = 0173; //八进制
	int k = 0x7b; //十六进制
	float f = 3.1415;
	float m = 3e-3;  //e代表幂
	printf("%d\n", i);
	printf("%d\n", j);
	printf("%d\n", k);
	printf("%.3f\n", m);
	printf("%f\n", f);   
	return 0;
}
