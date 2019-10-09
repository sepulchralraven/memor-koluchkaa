// лаба 1.1

#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	int a, b, P;
	cout <<"Введите длину: ";
	cin >> a;
	cout << "Введите ширину: ";
	cin >> b;
	P = 2 * (a + b);
	cout << "Периметр фигуры = " << P;
	return 0;
}