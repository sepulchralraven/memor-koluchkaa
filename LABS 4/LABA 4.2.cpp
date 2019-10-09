// LABA 4.2.cpp 
#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	float rad, α, π;
	cout << "Введите значение угла в радианах: ";
	cin >> rad;
	π = 3.14;
	if (0 < rad and rad < 2 * π) {
		α = rad * 180 / π;
		cout << "Величина угла в градусах = " << α << "°";
	}
	else
		cout << "Введите корректное значение радиан";
}
