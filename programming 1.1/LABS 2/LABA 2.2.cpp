// LABA 2.2.cpp 
// Даны три точки A, B, C на числовой оси. Найти длины отрезков AC
// и BC и их сумму.

#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	int A, B, C, AC, BC, sum;
	cout << "Введите координату А - ";
	cin >> A;
	cout << "Введите координату В - ";
	cin >> B;
	cout << "Введите координату С - ";
	cin >> C;
	AC = C - A;
	BC = C - B;
	sum = AC + BC;
	cout << "АС = " << AC << ", ВС = " << BC << ", их сумма равна " << sum;
	return 0;
}