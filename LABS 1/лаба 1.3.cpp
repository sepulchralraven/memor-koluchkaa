// лаба 1.3.cpp

#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	int a, b;
	cout << "Введите первое число: ";
	cin >> a;
	cout << "Введите второе число: ";
	cin >> b;
	cout << "Их среднее арифметическое равно - " << (a + b) / 2;
	return 0;
}