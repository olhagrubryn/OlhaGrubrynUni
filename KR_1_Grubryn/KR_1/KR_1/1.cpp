#include <iostream>
#include<stdio.h>
#include<windows.h>
#include <cstdlib> 
using namespace std;

int main1() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	double sum = 0, sum0 = 0, eps = 0.00001;
	double an = 2.0;
	int i = 1;
	do{
		sum0 = sum;
		sum += i / an;
		an *= -2.0;
		i++;
	} while (sum-sum0>eps);
	
	cout<< sum0 << endl;
	
	system("pause");
	return 0;
}

//output 0.5
