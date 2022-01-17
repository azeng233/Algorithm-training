#include <iostream>

using namespace std;

int main(){
	int a, temp;
	cin >> a;
	do{
		temp = a % 10;
		a /= 10;
		cout << temp;
	} while(a != 0);
}