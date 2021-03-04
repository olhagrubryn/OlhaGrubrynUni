
#include <iostream>
#include<stdio.h>
#include<windows.h>

using namespace std;

int main1() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	
		int num, i, couter, a = 1;

		cout << "¬вед≥ть число: "; cin >> num;

		for (i = 1; i <= num; i++)
		{
			for (couter = 1; couter <= i; couter++)
			{
				cout << a;
				a++;
			}
			cout << endl;
		}
		system("pause");
		return 0;
	}


//input:4
//output:
//1
//23
//456
//78910

//input:2
//output:
//1
//23
