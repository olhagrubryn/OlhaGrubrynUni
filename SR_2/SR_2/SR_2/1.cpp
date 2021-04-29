#include <iostream>
#include <ctime>
#include <cstdio>
#include<stdio.h>
#include<windows.h>
#include <string> 

#define MAX_LEN 200
using namespace std;

bool num(char elem)
{
	return (elem > '0' && elem < '9');
}



int main2()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	char* line = new char[MAX_LEN];
	char* str = new char[MAX_LEN];
	cout << "¬вед≥ть ";

	cin.getline(str, MAX_LEN);
	line = str;


	char* str2 = new char[MAX_LEN];
	int m = 0;
	bool tr;

	for (int i = 0; str[i] != '\0'; i++)
	{
		tr = num(str[i]) && (str[i] == str[i - 1]);

		if (tr)
		{
			continue;
		}
		str2[m + 1] = str[i];
	}

	str2[m] = '\0';
	cout << str2 << endl;
	system("pause");
	return 0;
}

	