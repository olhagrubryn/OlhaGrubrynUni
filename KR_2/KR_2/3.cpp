#include <iostream>
#include <ctime>
#include <cstdio>
#include<stdio.h>
#include<windows.h>
#include <cstdlib> 
#include <random> 

using namespace std;

int main3() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	

		int height, width;
		cin >> height >> width;

		int **mtrx = new int*[height];
		for (int i = 0; i<height; i++)
		{
			mtrx[i] = new int[width];
			for (int j = 0; j<width; j++)
			{
				mtrx[i][j] = rand() % 10;
				cout << mtrx[i][j] << "  ";
			}
			cout << endl;
		}


		cout << "==============================" << endl;
		cout << "«м≥нено " << endl;
		for (int i = 0; i<height; i++)
		{
			for (int j = width-1; j>-1; j--)
			{
				
				cout << mtrx[i][j] << "  ";
			}
			cout << endl;
		}
		

		delete[] mtrx;

		system("pause");
		return 0;

	}
//input:
//4
//4
//output :
//1  7  4  0
//9  4  8  8
//2  4  5  5
//1  7  1  1
//==============================
//«м≥нено
//0  4  7  1
//8  8  4  9
//5  5  4  2
//1  1  7  1