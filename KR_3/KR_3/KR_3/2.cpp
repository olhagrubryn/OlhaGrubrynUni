#include <iostream>
#include <ctime>
#include <cstdio>
#include<stdio.h>
#include<windows.h>
#include<fstream>
#include <string>

using namespace std;

char* OpenAndGet1() {
	string path = "in1.txt";
	ifstream fin;
	fin.exceptions(ifstream::badbit | ifstream::failbit);
	try
	{
		cout << "Спроба відкрити Файл" << endl;
		fin.open(path);
		cout << "Файл успошно відкрився" << endl;
	}
	catch (const std::exception & ex)
	{
		cout << ex.what() << endl;
		cout << "Помилка при відкриванні файлу" << endl;

	}

	if (fin.is_open()) {
		char* str = new char[256];
		while (!fin.eof()) {
			
			fin.getline(str, 256);
		
		}
		
		fin.close();
		return str;
	}
}


char* OpenAndGet2() {
	string path = "in2.txt";
	ifstream fin;
	fin.exceptions(ifstream::badbit | ifstream::failbit);
	try
	{
		cout << "Спроба відкрити Файл" << endl;
		fin.open(path);
		cout << "Файл успошно відкрився" << endl;
	}
	catch (const std::exception & ex)
	{
		cout << ex.what() << endl;
		cout << "Помилка при відкриванні файлу" << endl;

	}

	if (fin.is_open()) {
		char* str2 = new char[256];
		while (!fin.eof()) {

			fin.getline(str2, 256);

		}

		fin.close();
		return str2;
	}
}

void InputInFile1(char*output)
{
	string path = "in1.txt";
	ofstream fout;

	fout.open(path, ofstream::app);

	if (!fout.is_open()) {
		cout << "Файл myFileOutP.txt не відкрився" << endl;
	}
	else {
		cout << "Дані занесені у файл" << endl;
		fout << output;
	}
	fout.close();
}

void InputInFile2(char*output)
{
	string path = "in2.txt";
	ofstream fout;

	fout.open(path, ofstream::app);

	if (!fout.is_open()) {
		cout << "Файл myFileOutP.txt не відкрився" << endl;
	}
	else {
		cout << "Дані занесені у файл" << endl;
		fout << output;
	}
	fout.close();
}

//
//int main() {
//	SetConsoleOutputCP(1251);
//	SetConsoleCP(1251);
//
//	char* str2 = OpenAndGet2();
//	cout << str2 << endl;
//	InputInFile1(str2);
//
//	char* str1 = OpenAndGet1();
//	cout << str1 << endl;
//	InputInFile2(str1);
//
//	system("pause");
//	return 0;
//}