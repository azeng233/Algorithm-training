/*问题描述
　　给定n个十六进制正整数，输出它们对应的八进制数。

输入格式
　　输入的第一行为一个正整数n （1<=n<=10）。
　　接下来n行，每行一个由0~9、大写字母A~F组成的字符串，表示要转换的十六进制正整数，每个十六进制数长度不超过100000。

输出格式
　　输出n行，每行为输入对应的八进制正整数。

　　【注意】
　　输入的十六进制数不会有前导0，比如012A。
　　输出的八进制数也不能有前导0。

样例输入
　　2
　　39
　　123ABC

样例输出
　　71
　　4435274

　　【提示】
　　先将十六进制数转换成某进制数，再由某进制数转换成八进制。
*/
//#include <cstdio>
//#include <iostream>
//#include <cstring>
//#include <cmath>
//
//using namespace std;
//
//int main(){
//	int n;
//	cin >> n;
//	string a;
//	for(int i = 0; i < n; i++){    /*十六进制转化成十进制。然后十进制再转化成八进制*/
//		cin >> a;
//		long long sum = 0;
//		int  b;
//		for(int i = 0; i < a.length(); i++){
//			switch(a[i]){
//			case 'A': b = 10; break;
//			case 'B': b = 11; break;
//			case 'C': b = 12; break;
//			case 'D': b = 13; break;
//			case 'E': b = 14; break;
//			case 'F': b = 15; break;
//			default: b = a[i] - '0'; break;
//			}
//			sum = sum + b * pow(16,(a.length() - i - 1));
//		}
//		long long flag = sum;
//		long long pos = 0;
//		int s[400001];
//		do{
//			s[pos ++] = flag % 8;
//			flag /= 8;
//		}while(flag != 0);
//		
//		for(long long i = pos - 1; i >= 0; i--){
//			cout << s[i];
//		}
//	}
//	return 0;
//} 
#include<iostream>
#include<string>
using namespace std;
int main()
{
int n;
cin>>n;
string str;
string s2;
for(int i=0;i<n;i++)
    {
        cin>>str;
        s2="";
        for(int j=0;j<str.length();j++)
        {///把每一位数转化成4位2进制数，存在s2中 
            switch(str[j])
                {
                case '0':s2+="0000";break;
                case '1':s2+="0001";break;
                case '2':s2+="0010";break;
                case '3':s2+="0011";break;
                case '4':s2+="0100";break;
                case '5':s2+="0101";break;
                case '6':s2+="0110";break;
                case '7':s2+="0111";break;
                case '8':s2+="1000";break;
                case '9':s2+="1001";break;
                case 'A':s2+="1010";break;
                case 'B':s2+="1011";break;
                case 'C':s2+="1100";break;
                case 'D':s2+="1101";break;
                case 'E':s2+="1110";break;
                case 'F':s2+="1111";break;
                default:break;
                }
           }
        ///每三个构成的数为8进制，凑s2成3的倍数 
           if(s2.length()%3==1)
            s2="00"+s2;
          if(s2.length()%3==2)
            s2="0"+s2;
        //用于排斥前面的0；     
            int flag=0;
         for(int k=0;k<s2.length()-2;k+=3)
            {
                int p=4*(s2[k]-'0')+2*(s2[k+1]-'0')+s2[k+2]-'0';
                if(p)
                flag=1;
                if(flag)//直到不为0后开始输出 
                cout<<p;
             } 
             cout<<endl;
    }
return 0;
}
