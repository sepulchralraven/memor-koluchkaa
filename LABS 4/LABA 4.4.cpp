// LAST 4.4.cpp 

#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	float t, v1, v2, S;
	cout << "Введите скорость первого автомобиля: ";
	cin >> v1;
	cout << "Введите скорость второго автомобиля: ";
	cin >> v2;
	cout << "Введите время: ";
	cin >> t;
	S = t * (v1 + v2);
	cout << "Расстояние между машинами равно: " << S << " км";
	return 0;

}

