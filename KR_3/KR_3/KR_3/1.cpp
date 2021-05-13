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
Card & TheBigestOne(Card*& cards);

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	char*cards=OpenAndGet();
	

	system("pause");
	return 0;
}

char* OpenAndGet() {

	string path = "in2.txt";
	ifstream fin;
	int size;
	fin >> size;

	char* cards = new Card[size];

	char Rang[100];
	char Suit[100];

	for (int i = 0; i < size; ++i) {
		try
		{
			
			fin.get(Rang, 100, ',');
			fin.get();
			fin.get(Suit, 100, ',');
			fin.get();
			
		}
		catch (const char* error)
		{
			cout << "Помилка: " << error << endl;
			i--;
			size--;
		}
		catch (...) {
			cout << "Незрозуміла помилка "<<endl;
		}

	}
	fin.close();
	
}


void InputSortedCards(char*output)
{
	string path = "out.txt";
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

void SortCards(char &cards)
{
	int size = 100;
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - i - 1; j++) {
			if (strcmp(cards[j].Rang, cards[j + 1].Rang) > 0 ||
				(strcmp(cards[j].Rang, cards[j + 1].Rang) == 0 && strcmp(cards[j].Suit, cards[j + 1].Suit))) {
				swap(cards[j], cards[j + 1]);
			}
		}
	}
}


Card & TheBigestOne(Card*& cards) {
	int BigestSuit = cards[0].Suit;
	Card BigestRang = cards[0];
	for (int i = 1; i < 100; ++i) {
		if (BigestSuit > cars[i].Suit) {
			BigestSuit = cars[i].Suit;
			
		}
	}
	return BigestSuit;
}