#include <iostream>
#include <ctime>
#include <cstdio>
#include<stdio.h>
#include<windows.h>
#include <cstdlib> 
#include <random> 

using namespace std;

int main2() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	int size;
	cin >> size;

	int **mtrx = new int*[size];
	for (int i = 0; i<size; i++)
	{
		mtrx[i] = new int[size];
		for (int j = 0; j<size; j++)
		{
			cin >> mtrx[i][j];

		}
	}


	for (int i = 0; i<size; i++)
	{

		for (int j = 0; j<size; j++)
		{

			cout << mtrx[i][j] << "  ";
		}
		cout << endl;
	}


	int tmp;
	for (int i = 0; i < size; i++) {
		tmp = mtrx[i][i];
		mtrx[i][i] = mtrx[size - i - 1][i];
		mtrx[size - i - 1][i] = tmp;
	}
	cout << "==============================" << endl;
	cout << "Змінено " << endl;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			cout << mtrx[i][j] << "  ";
		}
		cout << endl;
	}

	system("pause");
	return 0;
}
//input:
//4
//output :
//5  8  7  4
//8  1  3  0
//7  2  8  2
//7  6  7  5
//
//==============================
//Çì³íåíî
//7  8  7  5
//8  2  8  0
//7  1  3  2
//5  6  7  4
