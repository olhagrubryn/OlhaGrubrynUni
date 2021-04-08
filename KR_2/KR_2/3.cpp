#include <iostream>
#include <ctime>
#include <cstdio>
#include<stdio.h>
#include<windows.h>
#include <cstdlib> 
#include <random> 

using namespace std;

int main() {
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
				cin >> mtrx[i][j];
				
			}
		}


		for (int i = 0; i<height; i++)
		{
			
			for (int j = 0; j<width; j++)
			{
				
				cout << mtrx[i][j] << "  ";
			}
			cout << endl;
		}

		cout << "==============================" << endl;
		int **arr = new int*[height];
		for (int i = 0; i<height; i++)
		{
			arr[i] = new int[width];
			int m = 0;
			for (int j = width - 1; j>-1; j--){
				
				arr[i][m] = mtrx[i][j];
				m++;
			}
		}

		cout << "Змінено " << endl;
		for (int i = 0; i<height; i++)
		{
			for (int j = 0; j<width; j++)
			{
				
				cout << arr[i][j] << "  ";
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
//Змінено
//0  4  7  1
//8  8  4  9
//5  5  4  2
//1  1  7  1
