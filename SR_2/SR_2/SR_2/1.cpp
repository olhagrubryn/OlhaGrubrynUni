#include <iostream>
#include <ctime>
#include <cstdio>
#include<stdio.h>
#include<windows.h>
#include <string> 

#define MAX_LEN 200
using namespace std;



int main2()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	char* line = new char[MAX_LEN];
	char* str = new char[MAX_LEN];
	cout << "Ââåä³òü ";

	cin.getline(str, MAX_LEN);
	


	char* str2 = new char[MAX_LEN];
	int m = 0, n=0;
	

	while (str[i] != '\0')
	{
		if (num(str[i]) && (str[i] == str[i + 1]))
		{continue;}
		str2[m + 1] = str[i];
		n++;
	}

	str2[m] = '\0';
	cout <<"str2"<<str2 << endl;
	
	system("pause");
	return 0;
}

	
