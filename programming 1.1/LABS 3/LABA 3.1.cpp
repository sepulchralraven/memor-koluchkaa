// LABA 3.1.cpp 
#include <iostream>
using namespace std;

int main() {
	setlocale(0, "");
	int A, B, t;
	cout << "Введите значение А: ";
	cin >> A;
	cout << "Введите значение В: ";
	cin >> B;
	t = A;
	A = B;
	B = t;
	cout << "Новые значения: А = " << A << endl;
	cout << "B = " << B;
	return 0;

}