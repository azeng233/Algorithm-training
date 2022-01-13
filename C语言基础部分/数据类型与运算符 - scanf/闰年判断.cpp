#include <stdio.h>

bool isPrime(int year){
	if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) return true;
	else return false;
}

int main(){
	int year;
	scanf("%d", &year);
	if(isPrime(year)) printf("yes");
	else printf("no");
	return 0;
}