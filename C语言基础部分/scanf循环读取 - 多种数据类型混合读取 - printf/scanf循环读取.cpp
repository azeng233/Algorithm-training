#include <stdio.h>

//清空缓冲区rewind(stdin),stdin是标准输入
//rewind清空标准输入缓冲区
int main(){
	int i;
	while(rewind(stdin),scanf("%d", &i) != EOF){	//while是实现循环,发生错误才会输出EOF
		printf("i=%d\n", i);
	}
//	int cnt = scanf("%d", &i);
//	printf("i=%d, cnt=%d", i, cnt);
	return 0;
}