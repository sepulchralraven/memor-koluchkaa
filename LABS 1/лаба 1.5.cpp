// ЛАБА 1.5

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	setlocale(0, "");
	int a, b;
	cout << "Введите первое число: ";
	cin >> a;
	cout << "Введите второе число: ";
	cin >> b;
	if (a != 0 and b != 0) {
		cout << "Сумма их модулей равна - " << abs(a) + abs(b) << endl;
		cout << "Разность их модулей равна - " << abs(a) - abs(b) << endl;
		cout << "Частное их модулей равно - " << abs(a) / abs(b) << endl;
		cout << "Произведение их молулей равно - " << abs(a) * abs(b) << endl;
	}
	else {
		cout << "Введенные числа не должны равняться нулю";
	}
	return 0;
}