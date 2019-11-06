// LABA 14.2.cpp 
// Дан целочисленный массив размера N, не содержащий одинаковых чисел. Проверить, образуют 
// ли его элементы арифметическую прогрессию. Если образуют, то
// вывести разность прогрессии, если нет — вывести 0.

#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	int N, d;
	int* arr;

	cout << "Введите размер массива: ";
	cin >> N;
	arr = new int[N];
	for (int i = 0; i < N; i++) {
		cout << "arr[" << i << "] = ";
		cin >> arr[i];
	}
	d = arr[1] - arr[0];
	for (int i = 2; i < N; i++) {
		if ((arr[i] - arr[i - 1]) != d) {
			cout << 0;
			return 0;
		}
	}
	cout << "Разность арифметической прогрессии равна: " << d;
}

