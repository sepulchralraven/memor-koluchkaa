﻿// LABA 3.5.cpp :

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	setlocale(0, "");
	int x, y;
	cout << "Введите х: ";
	cin >> x;
	y = 4 * pow(x - 3, 6) - 7 * pow(x - 3, 3) + 2;
	cout << " у = " << y;
	return 0;
}

