// LABA 10.1.cpp 
// Дано вещественное число — цена 1 кг конфет. 
// Вывести стоимость 0.1, 0.2, . . . , 1 кг конфет.

#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	double cost;
	cout << "Введите стоимость конфет: " << endl;
	cin >> cost;
	for (double i = 0.1; i <= 1; i = i + 0.1) {
		cout << "Стоимость " << i << " кг конфет равна " << cost * i << endl;
	}
	return 0;
}

