// лаба1.2.cpp

#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	int d;
	float π, L;
	cout << "Введите диаметр окружности: ";
	cin >> d;
	π = 3.14;
	L = π * d;
	cout << "Длина окружности: " << L;
	return 0;
}