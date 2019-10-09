﻿// LABA 5.3.cpp 

// Даны целые положительные числа A и B (A > B). На отрезке длины A размещено максимально 
// возможное количество отрезков длины B (без наложений). Найти длину незанятой части отрезка A

#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	int A, B, N, t;
	cout << "Введите А и В: " << endl;
	cin >> A >> B;
	if (A > 0 and B > 0 and A > B) {
		N = A / B;
		t = A - B * N;
		cout << "Длина незанятой части отрезка равна " << t;
	}
	else
		cout << "Введены неправильные значения А и/или В";
}

