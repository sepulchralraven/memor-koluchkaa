// LABA 2.1.cpp  
// Найти расстояние между двумя точками с заданными координатами (x1, y1) и (x2, y2)

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	setlocale(0, "");
	int x1, x2, y1, y2;
	float S;
	cout << "Введите координаты первой точки" << endl;
	cin >> x1 >> y1;
	cout << "Введите координаты второй точки" << endl;
	cin >> x2 >> y2;
	S = (float)sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	cout << "Расстояние между точками равно: " << S;
	return 0;
}

