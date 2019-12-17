// LABA 16.1.cpp 
// Дан целочисленный массив размера N. Удалить из массива все 
// соседние одинаковые элементы, оставив их первые вхождения.

#include <iostream>
using namespace std;

int main()
{
	int* arr;
	int* ars;
	int N;
	cout << "Enter array's size: " << endl;
	cin >> N;

	arr = new int[N];
	ars = new int[N];

	for (int i = 1; i < N + 1; i++) {
		cout << "arr[" << i << "] = ";
		cin >> arr[i];
	}
	int j = 1;
	for (int i = 1; i < N + 1; i++) {
		while (arr[i] == arr[i + 1]) {
			i++;
		}
		ars[j] = arr[i];
		j++;
	}
	cout << "Changed array: " << endl;
	for (int i = 1; i < j; i++) {
		cout << "ars[" << i << "] = " << ars[i] << endl;
	}
}
