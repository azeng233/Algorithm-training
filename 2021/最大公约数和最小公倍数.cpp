#include <stdio.h>
int main(){
  int a,b,r;
  scanf("%d %d",&a,&b);
  int m = a,n = b;
  do {
    r = a % b;
    a = b;
    b = r;
  }while(r != 0);
  printf("���Լ��Ϊ:%d",a);
  printf("��󹫱���Ϊ��%d",m*n/a);
  return 0;
}

