// LABA 3.4.cpp

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	setlocale(0, "");
	int x, y;
	cout << "Введите х: ";
	cin >> x;
	y = 3 * pow(x, 6) - 6 * pow(x, 2) - 7;
	cout << "y = " << y;
	return 0;
}

