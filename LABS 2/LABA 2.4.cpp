// LABA 2.4.cpp 

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	setlocale(0, "");
	int x1, x2, y1, y2, P, S;
	cout << "Введите первую вершину прямоугольника: " << endl;
	cin >> x1 >> y1;
	cout << "Введите вторую вершину прямоугольника: " << endl;
	cin >> x2 >> y2;
	P = 2 * (abs((x2 - x1)) + abs((y2 - y1)));
	S = abs(x2 - x1) * abs(y2 - y1);
	cout << "Периметр равен: " << P << ", площадь равна: " << S;
}

