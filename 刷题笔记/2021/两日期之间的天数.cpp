#include <stdio.h>

int year2,month2,day2;   //����Ϊȫ�ֱ����Ա��ں����е�������������
int cnt = 0;

int isPrime(int year) {
  if((year%4==0 &&year%100!=0) || year%400==0)
    return 1;
}

void f(int &year,int &month,int &day){
  switch(month){
		case 1:
		case 3:
		case 5:
                case 7:
		case 8:
		case 10: if(day > 31){
			month ++;
			day = 1;
		}
		break;
		case 2: if(isPrime(year)){
			if(day > 29){
				month ++;
				day = 1;
			}
		}
			else{
				if(day >28){
					month ++;
					day = 1;
				}
			}
			break;
		case 4:
		case 6:
		case 9:
		case 11: if(day > 30){
				month ++;
				day = 1;
			}
			break;
		case 12: if(day > 31){
				year ++;
				month = 1;
				day = 1;
			}
			break;
	}
}

int f1(int year,int month,int day){
   if(year == year2 && month == month2 && day == day2)
      return 0;
    else{
      day++;
      cnt++;
      f(year,month,day);   //�������ڵĽ��ƣ���ϸ�Ĵ�����Կ�һ�´�ʱ�˿̵���һ��
      f1(year,month,day);  //��������f1()���������н�λ
    }
}

int main(){
  int year1,month1,day1;
  printf("��ֱ�������������:\n");
  scanf("%d-%d-%d",&year1,&month1,&day1);
  scanf("%d-%d-%d",&year2,&month2,&day2);
  f1(year1,month1,day1);
  printf("��%d-%d-%d��%d-%d-%d֮�乲��%d�졣",year1,month1,day1,year2,month2,day2,cnt);
  return 0;
}

