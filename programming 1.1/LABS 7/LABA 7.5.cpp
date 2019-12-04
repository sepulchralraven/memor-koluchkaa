// LABA 7.5.cpp 

#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	int N, a, b, c, d;
	cout << "Введите четырехзначное число" << endl;
	cin >> N;
	a = N / 1000;
	b = N / 100 % 10;
	c = N / 10 % 10;
	d = N % 10;
	if (a == d and b == c) {
		cout << "Данное число читается одинаково слева направо и справа налево";
	}
	else
		cout << "Данное число не читается одинаково справа налево и слева направо";
}

