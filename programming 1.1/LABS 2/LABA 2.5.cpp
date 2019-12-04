// LABA 2.5.cpp 
// Даны координаты трех вершин треугольника: (x1, y1), (x2, y2), (x3, y3). Найти его периметр и площадь.

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	setlocale(0, "");
	int x1, x2, x3, y1, y2, y3;
	float st1, st2, st3, P, polP, S;
	cout << "Введите координаты первой вершины" << endl;
	cin >> x1 >> y1;
	cout << "Введите координаты второй вершины" << endl;
	cin >> x2 >> y2;
	cout << "Введите координаты третьей вершины" << endl;
	cin >> x3 >> y3;
	st1 = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
	st2 = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));
	st3 = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));
	P = st1 + st2 + st3;
	polP = P / 2;
	S = sqrt(polP * (polP - st1) * (polP - st2) * (polP - st3));
	cout << "Периметр треугольника равен: " << P << ", площадь треугольника равна: " << S;
	return 0;
}