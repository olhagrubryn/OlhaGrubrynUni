#include <iostream>
#include <ctime>
#include <cstdio>
#include<stdio.h>
#include<windows.h>
#include<fstream>
#include <string>
using namespace std;

struct Card
{
	string Rang;
	string Suit;
};

char* OpenAndGet();
void InputSortedCards(char*output);

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	char*cards=OpenAndGet();
	for (int i = 0; i < 256; i++) 
	{
		cards[i]=
	}
	Card card1;
	card1.Rang=

	system("pause");
	return 0;
}

char* OpenAndGet() {
	string path = "in.txt";
	ifstream fin;
	fin.exceptions(ifstream::badbit | ifstream::failbit);
	try
	{
		cout << "������ ������� ����" << endl;
		fin.open(path);
		cout << "���� ������� ��������" << endl;
	}
	catch (const std::exception & ex)
	{
		cout << ex.what() << endl;
		cout << "������� ��� ��������� �����" << endl;

	}

	if (fin.is_open()) {
		char* cards = new char[256];
		while (!fin.eof()) {

			fin.getline(cards, 256);

		}

		fin.close();
		return cards;
	}
}


void InputSortedCards(char*output)
{
	string path = "out.txt";
	ofstream fout;

	fout.open(path, ofstream::app);

	if (!fout.is_open()) {
		cout << "���� myFileOutP.txt �� ��������" << endl;
	}
	else {
		cout << "��� ������� � ����" << endl;
		fout << output;
	}
	fout.close();
}