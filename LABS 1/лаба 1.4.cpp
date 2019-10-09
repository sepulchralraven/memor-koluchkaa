// лаба 1.4

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	setlocale(0, "");
	int a, b;
	cout << "Введите первое число: " << endl;
	cin >> a;
	cout << "Введите второе число: " << endl;
	cin >> b;
	if (a != 0 and b != 0) {
		cout << "Сумма их квадратов равна - " << pow(a, 2) + pow(b, 2) << endl;
		cout << "Разность их квадратов равна - " << pow(a, 2) - pow(b, 2) << endl;
		cout << "Частное их квадратов равно - " << pow(a, 2) / pow(b, 2) << endl;
		cout << "Произведение их квадратов равно - " << pow(a, 2) * pow(b, 2) << endl;
	}
	else {
		cout << "Введенные числа не должны равняться нулю";
	}
	return 0;
}