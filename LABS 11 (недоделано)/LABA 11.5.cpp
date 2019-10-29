// LABA 11.5.cpp 
// Даны целые положительные числа A и B. Найти их наибольший общий
// делитель (НОД), используя алгоритм Евклида

#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	unsigned int NOD, A, B;
	cout << "Введите А и В" << endl;
	cin >> A >> B;
	while (A != B) {
		if (A > B)
			A = A - B;
		else
			B = B - A;
	}
	cout << "Наибольший общий делитель равен: " << A;
	return 0;
}

