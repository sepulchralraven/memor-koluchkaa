// LABA 4.6.cpp 
// 6. Найти решение системы линейных уравнений вида 
// A1•x + B1•y = C1,
// A2•x + B2•y = C2,


#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	int A1, A2, B1, B2, C1, C2, x, y;
	cout << "Введите следующие значения по порядку: " << endl << "A1 = " << endl << "B1 = " << endl << "A2 = " << endl << "B2 = " << endl << "C1 = " << endl << "C2 = " << endl;
	cin >> A1;
	cin >> B1;
	cin >> A2;
	cin >> B2;
	cin >> C1;
	cin >> C2;
	x = ((B1 * C2) - (B2 * C1)) / ((B1 * A2) - (B2 * A1));
	y = (C1 - A1 * x) / B1;
	cout << "x = " << x << endl;
	cout << "y = " << y;
	return 0;
}

