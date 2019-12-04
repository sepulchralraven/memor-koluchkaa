// LABA 8.3.cpp 
// На плоскости расположены три точки: A, B, C. Определить, какая из двух последних точек
// (B или C) расположена ближе к A, и вывести эту точку и ее расстояние от точки A.

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	setlocale(0, "");
	int x1, x2, x3, y1, y2, y3;
	float AB, AC;
	cout << "Введите координаты А " << endl;
	cin >> x1 >> y1;
	cout << "Введите координаты B " << endl;
	cin >> x2 >> y2;
	cout << "Введите координаты С " << endl;
	cin >> x3 >> y3;
	AB = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	AC = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));
	if (AB < AC) {
		cout << "Точка В находиться ближе к А. Расстояние между ними: " << AB;
	}
	else
		cout << "Точка С находиться ближе к А. Расстояние между ними: " << AC;
}
