// LABA 8.2.cpp 
// Даны три числа. Найти сумму двух наибольших из них

#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	int A, B, C, sum, S1, S2;
	cout << "Введите А, В и С: " << endl;
	cin >> A >> B >> C;
	if (A > B) {
		S1 = A;
		if (B > C)
			S2 = B;
		else
			S2 = C;
	}
	else if (B > C) {
		S1 = B;
		if (C > A)
			S2 = C;
		else
			S2 = A;
	}
	else {
		S1 = C;
		if (A > B)
			S2 = A;
		else
			S2 = B;
	}
	sum = S1 + S2;
	cout << "Сумма двух наибольших чисел равна " << sum;
	return 0;
}

