#include <stdio.h>

int main(){
	int i = 5;
	float j = i / 2;
	float k = (float)i / 2;	//强制类型转换
	printf("j=%.f\n", j);
	printf("k=%.1f\n", k);
	return 0;
}