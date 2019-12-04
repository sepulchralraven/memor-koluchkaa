// LABA 12.1.cpp 
// Описать функцию PowerA3(A, B), вычисляющую третью степень числа A и
// возвращающую ее в переменной B (A — входной, B — выходной параметр;
// оба параметра являются вещественными).
// С помощью этой функции найти третьи степени пяти данных чисел.

#include <iostream>
#include <math.h>
using namespace std;


float PowerA3(float A)
{
	float B;
	B = A * A * A;
	return B;
}

int main() {
	setlocale(0, "");
	float A, B;
	for (int i = 0; i < 5; i++)
	{
		cout << "Введите " << i + 1 << "-е число: " << endl;
		cin >> A;
		cout << PowerA3(A) << endl;
	}
	return 0;
}