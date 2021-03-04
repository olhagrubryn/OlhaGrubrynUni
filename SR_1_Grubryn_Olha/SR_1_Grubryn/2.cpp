
#include <iostream>
#include<stdio.h>
#include<windows.h>
#include <math.h>
using namespace std;

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	
	

	int x, n = 1,num,a=0,sum=0;
	cout << "¬вед≥ть чило:";
	cin >> x;
	num = x;
	while ((num /= 10) > 0) n++;
	
	
	while (x>0) {
		a = x % 10;
		a=a*pow(2, n);
		sum += a;
		x /= 10;
		n--;
	}
	cout << sum;
	system("pause");
	return 0;
}
//input:1010
//output:10