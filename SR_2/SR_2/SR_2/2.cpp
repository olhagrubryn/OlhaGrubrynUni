#include <iostream>
#include <cstdio>
#include<stdio.h>
#include<windows.h>
#include<fstream>
#include <string>
using namespace std;



void work_with_file() {

	ifstream fin;
	fin.open("in.txt");

	if (!fin.is_open()) {
		cout << "не відкрився" << endl;
	}
	else {

		cout << "все добре" << endl;
		
		char * memblock;
		
		char str[50];
		while (!fin.eof()) {

			fin.getline(str, 50);
								 
			cout << str << endl;
		}

	}
	while (!fin.eof()) {

		if (ispunct(str[i]))
		{
			str.erase(i--, 1);

		}
	}


	fin.close();

	


	string path = "out.txt";
	ofstream fout;
	fout.open("out.txt");
	fout.open(path, ofstream::app);
	if (!fout.is_open()) {
		cout << "не відкрився" << endl;
	}
	else {
		
		fout << new;

		
	}
	fout.close();

	

}




int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	
	work_with_file();


	system("pause");
	return 0;
}