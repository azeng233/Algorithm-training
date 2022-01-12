/*问题描述
　　编写一个求解一元二次方程的实数根的程序，方程的系数由用户在运行xh
输入格式
　　输入一行三个整数分别为一元二次方程的三个系数，数据之间以空格隔开
输出格式
　　输出一行为方程的实数根（若两根不同 较大的在前 两根以空格隔开 若两根相同 输出一个 若无根 输出 NO ）
样例输入
1 -5 4
样例输出
4 1
样例输入
1 -2 1
样例输出
1
样例输入
1 0 1
样例输出
NO
*/
 #include<stdio.h>
 #include<math.h>
 #include<algorithm>
 using namespace std;
 
 int main()
 {
 	double a,b,c;
	scanf("%lf%lf%lf",&a,&b,&c);
	if(b*b-4*a*c<0){
		printf("NO");	
	}  
	else
	{
		double x1,x2;
		x1=(-b+sqrt(b*b-4*a*c))/(2*a);//求根公式 
		x2=(-b-sqrt(b*b-4*a*c))/(2*a);
		if(x1==x2){
			printf("%g",x1);//以%g输出，省略浮点数后面的0 
		}
		else if(x1 < x2)
		{
			swap(x1,x2);
			printf("%g %g",x1,x2);
		}
		else{
			printf("%g %g",x1,x2);
		}
	}
	return 0;
 } 

