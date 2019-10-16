// LABA 3.6.cpp 
// Дано число A. Вычислить A8 , используя вспомогательную переменную и три операции умножения.

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	setlocale(0, "");
	int A, B;
	cout << "Введите А" << endl;
	cin >> A;
	B = A * A;
	A = B * B;
	B = A * A;
	cout << "А в 8 степени равно " << B;
