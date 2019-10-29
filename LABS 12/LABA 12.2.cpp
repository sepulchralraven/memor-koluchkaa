// LABA 12.2.cpp
// Описать функцию Sign(X) целого типа, возвращающую для вещественного
// числа X следующие значения:
// −1, если X < 0; 0, если X = 0; 1, если X > 0.
// С помощью этой функции найти значение выражения Sign(A) + Sign(B)
// для данных вещественных чисел A и B.


#include <iostream>
using namespace std;

int Sign(int x) {
	if (x < 0) 
		x = -1;
	if (x > 0) 
		x = 1;
	return x;
}

int main()
{
	double A, B, q;
	setlocale(0, "");
	cout << "Введите А и В" << endl;
	cin >> A >> B;
	q = Sign(A) + Sign(B);
	cout << q;
}

