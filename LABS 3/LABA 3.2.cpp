
// LABA 3.2.cpp 

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
	t = B;
	v = A;
	A = C;
	B = v;
	C = t;
	cout << "Новые значения: А = " << A << endl;
	cout << "B = " << B << endl;
	cout << "C = " << C;
	return 0;
}


