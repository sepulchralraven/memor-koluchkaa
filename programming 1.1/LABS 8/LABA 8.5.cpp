﻿// LABA 8.5.cpp 
// Дано целое число. Вывести его строку-описание вида «отрицательное четное число», 
// «нулевое число», «положительное нечетное число» и т. д.

#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	int a;
	cout << "Введите число" << endl;
	cin >> a;
	if (a != 0) {
		if (a > 0)
			cout << "Положительное ";
		else
			cout << "Отрицательное ";
		if (a % 2 == 0)
			cout << "четное число";
		else
			cout << "нечетное число";
	}
	else
		cout << "Нулевое число";
}