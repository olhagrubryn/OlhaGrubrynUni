#include <iostream>
#include <ctime>
#include <cstdio>
#include<stdio.h>
#include<windows.h>
#include <cstdlib> 
#include <random> 

using namespace std;
int max_par(int arr[], int size) {

	int max1 = arr[1];
	int max2 = arr[1];
	for (int i = 1; i <= size-1; i++) {
	
			if (arr[i]+arr[i + 1]>max1+max2) {
				max1 = arr[i];
				max2 = arr[i+1];
			}

	}
	cout << "���� ������ " << max1 << "  " << max2 << endl;
	return 0;
}




int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	
	int size, a, b;

	cout << "������ ������� �������� � �����: ";
	cin >> size;
	cout << "������ ������� ���������� ���������� ������" << endl;
	cout << "³�: ";
	cin >> a;
	cout << "��: ";
	cin >> b;
	int*arr = new int[size];
	cout << "�����: " << endl;
	mt19937 gen(time(0));
	uniform_int_distribution<> uid(a, b);
	for (int i = 1; i <= size; i++) {
		arr[i] = uid(gen);
		cout << arr[i] << "  ";
	}
	
	cout<<max_par(arr, size);
	
	system("pause");
	return 0;
}

//������ ������� �������� � ����� : 10
//������ ������� ���������� ���������� ������
//³� : 1
//�� : 10
// ����� :
//4  6  3  7  2  4  5  3  5  3  ���� ������ 4  6

//������ ������� �������� � ����� : 10
//������ ������� ���������� ���������� ������
//³� : 1
//	�� : 10
//	����� :
//	9  4  3  6  1  5  6  8  7  1  ���� ������ 9  9