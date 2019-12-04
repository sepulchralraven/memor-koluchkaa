// LAba 6.4.cpp 

#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	int A, B, C, q;
	cout << "Введите значения А, В и С: " << endl;
	cin >> A >> B >> C;
	q = 0;
	if (A >= C and B >= C) {
		q = (A * B) / (C * C);
		cout << q;
	}
	else
		cout << q;
}
