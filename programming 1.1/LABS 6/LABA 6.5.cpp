﻿// LABA 6.5.cpp 
// Дан номер некоторого года (целое положительное число). Определить соответствующий 
// ему номер столетия, учитывая, что, к примеру, началом 20 столетия был 1901 год

#include <iostream>
using namespace std;


int main()
{
	setlocale(0, "");
	int G, S, a;
	cout << "Введите год" << endl;
	cin >> G;
	a = G / 100;
	S = a + 1;
	cout << "Столетие для этого года равно " << S;
	return 0;
}

