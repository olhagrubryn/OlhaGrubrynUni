#include <iostream>
#include<stdio.h>
#include<windows.h>
#include <cstdlib> 
using namespace std;
int step(int k) {
	k *= k;
	return k;
}
int func(int a) {
	int k = 1;
	int  N;
	
	
	while (a>k) {
		k++;
		N = k;
		k = step(k);
	}

	cout << N;
	return 0;
}
int main2() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	int a;
	cout << "¬вед≥ть число " << endl;
	cin >> a;
	func(a);

	system("pause");
	return 0;
}
//intput 12
//output 5

//intput 45
//output 26
