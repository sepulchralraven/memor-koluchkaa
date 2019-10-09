// лаба 1.3.cpp

#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	int a, b;
	float sa;
	cout << "Введите первое число: ";
	cin >> a;
	cout << "Введите второе число: ";
	cin >> b;
	sa = (float)(a + b) / 2;
	cout << "Их среднее арифметическое равно - " << sa;
	return 0;
}
