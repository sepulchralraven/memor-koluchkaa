// LABA 12.4.cpp 
// Описать функцию Quarter(x, y) целого типа, определяющую номер координатной четверти,
// в которой находится точка с ненулевыми вещественными координатами (x, y).
// С помощью этой функции найти номера координатных четвертей для трех точек
// с данными ненулевыми координатами

#include <iostream>
using namespace std;

int Quarter(int x, int y) {
	int A;
	if (x > 0 and y > 0)
		A = 1;
	if (x > 0 and y < 0)
		A = 2;
	if (x < 0 and y < 0)
		A = 3;
	if (x < 0 and y > 0)
		A = 4;
	return A;
}

int main()
{
	setlocale(0, "");
	int x, y;
	for (int i = 0; i < 3; i++) {
		cout << "Введите координаты точки" << endl;
		cin >> x >> y;
		cout << "Точка находится в " << Quarter(x, y) << " координатной четверти" << endl;
	}
}

