#include <iostream>
#include<stdio.h>
#include<windows.h>

using namespace std;

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int m, n, a;
	cout << "Введіть кількіть останніх цифр:" << endl;
	cin >> m;
	cout << "Ведіть саме число(натуральне): " << endl;
	cin >> n;
	if (m > 0 && n > 0) {
		for (int i = 1, sum = 0; i <= m; i++) {
			a = n % 10;
			sum += a;
			n /= 10;


		}
	}
	else {
		cout << "Виввели від'ємне число!" << endl;
	}
	cout << "Сума " << m << " останніх елементів дорівнює " << (int)sum << endl;

	system("pause");
}