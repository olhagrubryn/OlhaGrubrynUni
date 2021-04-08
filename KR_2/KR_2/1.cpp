#include <iostream>
#include <ctime>
#include <cstdio>
#include<stdio.h>
#include<windows.h>
#include <cstdlib> 
#include <random> 

using namespace std;
double max_par(int arr[], int size) {

	double max1 = arr[1];
	double max2 = arr[1];
	for (int i = 1; i <= size-1; i++) {
	
			if (arr[i]+arr[i + 1]>max1+max2) {
				max1 = arr[i];
				max2 = arr[i+1];
			}

	}
	cout << "Ïàðà ìàêñèì " << max1 << "  " << max2 << endl;
	return 0;
}




int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	
	int size, a, b;

	cout << "Ââåä³òü ê³ëüê³ñòü åëåìåíò³â â ìàñèâ³: ";
	cin >> size;
	cout << "Ââåä³òü ä³àïàçîí ðàíäîìíîãî çàïîâíåííÿ ìàñèâó" << endl;
	cout << "Â³ä: ";
	cin >> a;
	cout << "Äî: ";
	cin >> b;
	int*arr = new int[size];
	cout << "ìàñèâ: " << endl;
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

//Ââåä³òü ê³ëüê³ñòü åëåìåíò³â â ìàñèâ³ : 10
//Ââåä³òü ä³àïàçîí ðàíäîìíîãî çàïîâíåííÿ ìàñèâó
//Â³ä : 1
//Äî : 10
// ìàñèâ :
//4  6  3  7  2  4  5  3  5  3  Ïàðà ìàêñèì 4  6

//Ââåä³òü ê³ëüê³ñòü åëåìåíò³â â ìàñèâ³ : 10
//Ââåä³òü ä³àïàçîí ðàíäîìíîãî çàïîâíåííÿ ìàñèâó
//Â³ä : 1
//	Äî : 10
//	ìàñèâ :
//	9  4  3  6  1  5  6  8  7  1  Ïàðà ìàêñèì 9  9
