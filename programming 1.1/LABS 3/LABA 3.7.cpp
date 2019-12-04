// LABA 3.7.cpp 
// Дано число A. Вычислить A15, используя две вспомогательные переменные и пять операций умножения.

#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	int A, B, C;
	cout << "Введите A " << endl;
	cin >> A;
    B = A * A * A;
    C = B * B;
    C = C * C * B;
	cout << "А в 15 степени равно: " << C;
	return 0;
}
