// LABA 3.7.cpp 
// Дано число A. Вычислить A15, используя две вспомогательные переменные и пять операций умножения.

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	setlocale(0, "");
	int A, triple, fifth;
	cout << "Введите A " << endl;
	cin >> A;
	triple = pow(A, 3);
	fifth = pow(A, 5);
	A = fifth * fifth * triple * A * A;
	cout << "А в 15 степени равно: " << A;
	return 0;
}

