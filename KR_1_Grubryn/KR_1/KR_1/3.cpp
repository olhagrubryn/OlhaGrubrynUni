#include <iostream>
#include<stdio.h>
#include<windows.h>
#include <cstdlib> 
using namespace std;
int fcl(int n) {
	int fact = 1;
	for (int i = 1; i <= n; i++) {
		fact *= i;
	}
	return fact;
}
int recurs(int N) {
	int an, anm = 0;
	an = 2 + 1;//a1
	for (int i = 2; i <= N; i++) {
		anm = an;
		an = 2 * anm + fcl(i);
	}
	cout << an;
	return 0;
}

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	//ai = 2ai−1 + i!
	int N;
	cout << "Введіть число " << endl;
	cin >> N;
	recurs(N);
	system("pause");
	return 0;
}

//intput 3
//output 22

//intput 1
//output 3