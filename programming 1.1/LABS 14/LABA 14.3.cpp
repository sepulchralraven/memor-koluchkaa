// LABA 14.3.cpp 
// Дан массив A размера N. Найти минимальный элемент из его элементов с четными номерами: A2, A4, A6,

#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	int* A;
	int N, min;

	cout << "Введите размер массива: " << endl;
	cin >> N;

	A = new int[N];
	min = 100000;
	for (int i = 1; i < N + 1; i++) {
		cout << "A[" << i << "] = ";
		cin >> A[i];
	}

	for (int i = 2; i < N; i += 2) {
		if (A[i] < min)
			min = A[i];
	}
	cout << "Минимальный четный элемент равен: " << min;
}

