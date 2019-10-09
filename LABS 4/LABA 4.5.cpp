// LABA 4.5.cpp 

#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	int A, B;
	float x;
	cout << "A * x + B = 0. Введите А: " << endl;
	cin >> A;
	if (A != 0) {
		cout << "Введите В: ";
		cin >> B;
		x = (float)-B / A;
		cout << "х = " << x;
	}
	else
		cout << "А не может быть равен нулю по условию";
}

