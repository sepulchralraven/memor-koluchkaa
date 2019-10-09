// LABA 7.7.cpp 

#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	int a, b, c;
	cout << "Введите стороны треугольника" << endl;
	cin >> a >> b >> c;
	if (a + b > c and b + c > a and a + c > b) {
		cout << "Треугольник существует";
	}
	else
		cout << "Треугольник не существует";
}