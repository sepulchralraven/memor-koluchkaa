﻿// LABA 6.2.cpp  
// Дни недели пронумерованы следующим образом: 0 — воскресенье, 1 — понедельник,
// 2 — вторник, . . . , 6 — суббота. Дано целое число K, лежащее в диапазоне 1–365.
// Определить номер дня недели для K-го дня года, если известно, что в этом 
// году 1 января было понедельником.

#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	int K;
	cout << "Введите К" << endl;
	cin >> K;
	if (K >= 1 and K <= 365) {
		K = K % 7;
		cout << "Номер дня недели: " << K;
		return 0;
	}
}
