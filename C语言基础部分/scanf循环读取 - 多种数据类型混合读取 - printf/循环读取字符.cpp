#include <stdio.h>

int main(){
	char c;
	while(scanf("%c", &c) != EOF){
		if(c != '\n') printf("%c", c-32);//小写字母转化大写字母
	 	else printf("\n");
	}
}