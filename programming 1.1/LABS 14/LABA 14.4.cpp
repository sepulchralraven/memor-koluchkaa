// LABA 14.4.cpp 
// Дан массив размера N. Найти номер его последнего локального максимума
// (локальный максимум — это элемент, который больше любого из своих соседей).

#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	int* arr;
	int N, locmax;

	cout << "Введите размер массива: " << endl;
	cin >> N;

	arr = new int[N];

	for (int i = 1; i < N + 1; i++) {
		cout << "arr[" << i << "] = ";
		cin >> arr[i];
	}
	locmax = arr[N - 2];
	for (int i = N - 1; i < N + 1; i++) {
		if (locmax < arr[i])
			locmax = arr[i];
		else
			continue;
	}
	cout << "Локальный максимум равен: " << locmax;
}

