/*
现在给出体重和身高数据，需要根据 BMI 指数判断体型状态并输出对应的判断。

对于非 C++ 语言，在输出时，请四舍五入保留六位有效数字输出，如果小数部分存在后缀 00，不要输出后缀 00。

请注意，保留六位有效数字不是保留六位小数。例如 114.5149 应该输出为 114.515，9198.109 应该输出为 9198.1。

输入格式
共一行。

第一行，共 22 个浮点数，m,n，分别表示体重（单位为 kg），身高（单位为 m）。

输出格式
无

输入输出样例
输入 #1复制
70 1.72
输出 #1复制
Normal
说明/提示
m 和 h 均不超过 3 位小数
*/
#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main(){
	double m, h;
	cin >> m >> h;
	double BMI = m / pow(h, 2);
	if(BMI < 18.5) printf("Underweight");
	else if(BMI < 24) printf("Normal");
	else {
		cout << BMI << endl;
		printf("Overweight");	
	}
	return 0;
}