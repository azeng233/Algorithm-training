#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int x;
	cin >> x;
	double money = x * pow(1.033, 3);
	cout << money;
	return 0;
}