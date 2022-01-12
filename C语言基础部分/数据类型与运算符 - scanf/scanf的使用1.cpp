#include <stdio.h>

int main(){
	int i, j;
	char c;
	scanf("%d", &i);
	printf("i=%d\n", i);
//	scanf("%c", &c);	//这里缓冲区不为空,不会阻塞。
//	printf("c=%c\n", c);
	scanf("%d", &j);
	printf("j=%d\n", j);
	return 0;
}