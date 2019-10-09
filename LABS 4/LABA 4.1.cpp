// LABA 4.1.cpp 

#include <iostream>
using namespace std; 

int main()
{
	setlocale(0, "");
	int α;
	float π, rad;
	π = 3.14;
	cout << "Введите величину угла: ";
	cin >> α;
	if (0 < α and α < 360) {
		rad = π / 180 * α;
		cout << " Угол в радианах равен = " << rad << " рад";
	}
	else
		cout << "Угол должен быть в пределах от 0 до 360";
} 
