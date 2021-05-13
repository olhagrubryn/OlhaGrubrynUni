#include <iostream>
#include<stdio.h>
#include<windows.h>

using namespace std;

struct Rectangle
{
public:
	Rectangle(){
		cout << "Прямокутник" << endl;
	}
	double P(double a, double b)
	{
		this->a = a;
		this->b = b;
		return 2 * (a + b);
	}
	double a;
	double b;
};
//void main() {
//	SetConsoleOutputCP(1251);
//	SetConsoleCP(1251);
//
//	Rectangle rec;
//	cout<<rec.p(2,3)<<endl;
//	
//
//	system("pause");
//	
//}