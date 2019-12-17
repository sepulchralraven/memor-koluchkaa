// LABA 16.5.cpp 
// Дан массив размера N. Перед каждым положительным элементом массива вставить элемент с нулевым значением.

#include <iostream>
using namespace std;

int main()
{
	int N, Q, q;

	cout << "Enter array's size: " << endl;
	cin >> N;

	int* arr = new int[N];

	Q = N;
	q = 1;

	for (int i = 1; i < N + 1; i++) {
		cout << "arr[" << i << "] = ";
		cin >> arr[i];
	}

	for (int i = 1; i < N + 1; i++) {
		if (arr[i] > 0)
			Q++;
	}

	int* ars = new int[Q];

	for (int i = 1; i < N + 1; i++) {
		if (arr[i] > 0) {
			ars[q] = 0;
			ars[q + 1] = arr[i];
			q++;
		}
		else
			ars[q] = arr[i];
		q++;

	}

	cout << "Changed array: " << endl;
	for (int i = 1; i < Q + 1; i++) {
		cout << "ars[" << i << "] = " << ars[i] << endl;;

	}
}

