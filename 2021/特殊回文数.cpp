#include <stdio.h>

bool huiwenshu(int n){
	int x = 0;
	int k = n;
	while(k > 0){
		x = x * 10 + k % 10;
		k /= 10;
	}
	if(x == n) {
		return true;
	}
	else {
		return false;
	}
} 

int main() {
   int a,b,c,d,e,f;
   int n;
   scanf("%d",&n);
   int i;
   for( i = 10000;i <= 999999; i++ ) {
   	 if(i / 100000 == 0) {       //判断是否为5位数！ 
   	 	a = i % 10;
   	 	b = ((i-a)/10)%10;
   	 	c = (((i-a)/10-b)/10)%10;
   	 	d = ((((i-a)/10-b)/10-c)/10)%10;
   	 	e = (((((i-a)/10-b)/10-c)/10-d)/10)%10;
   	 	int sum = a*10000+b*1000+c*100+d*10+e*1;
   	 	if(sum == i && n == a+b+c+d+e) {
   	 		printf("%d\n",sum);
			}
		}
	  else {
	  	a = i % 10;
   	 	b = ((i-a)/10)%10;
   	 	c = (((i-a)/10-b)/10)%10;
   	 	d = ((((i-a)/10-b)/10-c)/10)%10;
   	 	e = (((((i-a)/10-b)/10-c)/10-d)/10)%10;
   	 	f = ((((((i-a)/10-b)/10-c)/10-d)/10)/10)%10;
   	 	int sum = a*100000+b*10000+c*1000+d*100+e*10+f*1;
   	 	if(sum == i && n == a+b+c+d+e+f) {
   	 		printf("%d\n",sum);
			}
	  }  
   }
   return 0;
}
