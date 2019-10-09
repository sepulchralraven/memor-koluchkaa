// LABA 4.3.cpp 

#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	float x, a, y;
	cout << " X кг конфет стоит А рублей" << endl;
	cout << "Введите Х " << endl;
	cin >> x;
	cout << "Введите А " << endl;
	cin >> a;
	y = a / x;
	cout << "Цена конфет за кг равна: " << y;
	return 0;

}

