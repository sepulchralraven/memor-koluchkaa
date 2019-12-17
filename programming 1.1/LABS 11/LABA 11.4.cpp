﻿// LABA 11.4.cpp 
// Начальный вклад в банке равен 1000 руб. Через каждый месяц 
// размер вклада увеличивается на P процентов от имеющейся суммы
// (P — вещественное число, 0 < P < 25). По данному P определить,
// через сколько месяцев размер вклада превысит 1100 руб., и вывести
// найденное количество месяцев K (целое число) и итоговый размер вклада
// S (вещественное число).

#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	int K = 0;
	float P, S = 1000;
	cout << "Введите Р процентов (0 < P < 25)" << endl;
	cin >> P;
	while (S < 1100) {
		S = S + P / 100 * S;
		K = K + 1;
	}
	cout << "Вклад станет равен: " << S << " через " << K << " месяцев";
	return 0;
}
