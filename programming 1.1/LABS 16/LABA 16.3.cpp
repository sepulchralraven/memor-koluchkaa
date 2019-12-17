// LABA 16.3.2.cpp 
// Дан массив размера N. Вставить элемент с нулевым значением перед минимальным и после
// максимального элемента массива.

#include <iostream>
using namespace std;

int main()
{
	int N, imin, imax, min, max;
	int q = 1;

	cout << "Enter array's size: " << endl;
	cin >> N;

	int* arr = new int[N];
	int* ars = new int[N + 2];

	for (int i = 1; i < N + 1; i++) {
		cout << "arr[" << i << "] = ";
		cin >> arr[i];
	}
	min = arr[1];
	max = arr[1];
	for (int i = 1; i < N + 1; i++) {
		if (arr[i] > max) {
			max = arr[i];
			imax = i;
		}
		if (arr[i] < min) {
			min = arr[i];
			imin = i;
		}
	}

	for (int i = 1; i < N + 1; i++) {
		if ((arr[i] == max) or (arr[i] == min)) {
			ars[q] = 0;
			ars[q + 1] = arr[i];
			q = q + 1;
		}
		else
			ars[q] = arr[i];
		q++;
	}

	cout << "Changed array: " << endl;
	for (int i = 1; i < N + 3; i++) {
		cout << "ars[" << i << "] = " << ars[i] << endl;;

	}
}
