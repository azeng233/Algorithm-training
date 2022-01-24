#include <cstdio>
#include <cmath>
#include <iostream>
using namespace std;
int main(){
        string a;
        cin >> a;
        long long sum = 0;
        int b;
        for(int i = 0; i < a.length(); i++){
                switch(a[i]){
                        case 'A': b = 10; break;
                        case 'B': b = 11; break;
                        case 'C': b = 12; break;
                        case 'D': b = 13; break;
                        case 'E': b = 14; break;
                        case 'F': b = 15; break;
                        case 'G': b = 16; break;
                        case 'H': b = 17; break;
                        case 'I': b = 18; break;
                        case 'J': b = 19; break;
                        case 'K': b = 20; break;
                        case 'L': b = 21; break;
                        case 'M': b = 22; break;
                        case 'N': b = 23; break;
                        case 'O': b = 24; break;
                        case 'P': b = 25; break;
                        case 'Q': b = 26; break;
                        case 'R': b = 27; break;
                        case 'S': b = 28; break;
                        case 'T': b = 29; break;
                        case 'U': b = 30; break;
                        case 'V': b = 31; break;
                        case 'W': b = 32; break;
                        case 'X': b = 33; break;
                        case 'Y': b = 34; break;
                        case 'Z': b = 35; break;
                        default: b = a[i] - '0'; break;
                }
                sum = sum + b * pow(36,(a.length() - i - 1));
        }
        cout << sum ;
        return 0;
}