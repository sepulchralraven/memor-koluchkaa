// LABA 7.6.cpp 

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	setlocale(0, "");
	int a, b, c;
	cout << "Введите a, b и с " << endl;
	cin >> a >> b >> c;
	if (c * c == a * a + b * b) {
		cout << "Данный треугольник является прямоугольным";
	}
	else
		cout << "Треугольник не является прямоугольным";
}

