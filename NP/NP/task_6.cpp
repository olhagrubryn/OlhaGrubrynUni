#include <iostream>
#include<stdio.h>
#include<windows.h>

using namespace std;
//tasc 6
int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int m, n, a,sum=0;
	cout << "Ââåä³òü ê³ëüê³òü îñòàíí³õ öèôð:" << endl;
	cin >> m;
	cout << "Âåä³òü ñàìå ÷èñëî(íàòóðàëüíå): " << endl;
	cin >> n;
	if (m > 0 && n > 0) {
		for (int i = 1; i <= m; i++) {
			a = n % 10;
			sum += a;
			n /= 10;


		}
	}
	else {
		cout << "Âèââåëè â³ä'ºìíå ÷èñëî!" << endl;
	}
	cout << "Ñóìà " << m << " îñòàíí³õ åëåìåíò³â äîð³âíþº " << (int)sum << endl;

	system("pause");
	return 0;
}
