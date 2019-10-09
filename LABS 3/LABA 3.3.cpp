// LABA 3.3.cpp 

#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	int A, B, C, t, v;
	cout << "Введите значение А: ";
	cin >> A;
	cout << "Введите значение В: ";
	cin >> B;
	cout << "Введите значение С: ";
	cin >> C;
	t = C;
	v = B;
	C = A;
	B = t;
	A = v;
	cout << "Новые значения: А = " << A << endl;
	cout << "B = " << B << endl;
	cout << "C = " << C;
	return 0;
}

