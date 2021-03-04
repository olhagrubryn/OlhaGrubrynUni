
#include <iostream>
#include<stdio.h>
#include<windows.h>

using namespace std;

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int n, k = 0, l = 1, a;
	cout << "Введіть чсло:";
	cin >> n;
	while (n >=0)
	{
		a = n % 10;
		cout<<a*s
		n = n / 10;
		if (a == 1)
		{
			k += l;
		}
		l *= 2;
	}
	cout << "Десяткове" << k;
	return 0;
}
//input:
//output: