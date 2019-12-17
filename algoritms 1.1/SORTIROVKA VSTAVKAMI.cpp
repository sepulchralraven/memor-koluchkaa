// SORTIROVKA VSTAVKAMI.cpp 

#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	int* arr;
	int N, x;

	cout << "Введите размер массива: ";
	cin >> N;

	arr = new int[N];

	for (int i = 0; i < N; i++) {
		cout << "arr[" << i << "] = ";
		cin >> arr[i];
	}

	for (int i = 1; i < N; i++) {
		x = arr[i];
		int j = i - 1;
		while (x < arr[j]) {
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = x;
	}
	cout << "Отсортированный массив: " << endl;
	for (int i = 0; i < N; i++) {
		cout << "arr[" << i << "] = " << arr[i] << endl;
	}
	delete[] arr;
	return 0;
}