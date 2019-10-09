// LABA 2.3.cpp 

#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	int A, B, C, AC, BC, Pr;
	cout << "Введите координату А - ";
	cin >> A;
	cout << "Введите координату В - ";
	cin >> B;
	cout << "Введите координату С - ";
	cin >> C;
	if (C > A and C < B) {
		AC = C - A;
		BC = B - C;
		Pr = AC * BC;
		cout << "Произведение отрезков равно = " << Pr;
	}
	else
		cout << "C должно быть больше А и меньше В";
}