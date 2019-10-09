// LABA 3.6.cpp 
// Дано число A. Вычислить A8 , используя вспомогательную переменную и три операции умножения.

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	setlocale(0, "");
	int A, triple;
	cout << "Введите А" << endl;
	cin >> A;
	triple = pow(A, 3);
	A = A * A * triple * triple;
	cout << "А в 8 степени равно " << A;
}

