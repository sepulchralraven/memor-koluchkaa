// LABA 13.1.cpp 
// Дано целое число N (> 0). Сформировать и вывести целочисленный массив 
// размера N, содержащий N первых положительных нечетных чисел: 1, 3, 5, . . .

#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	int N;
	int j = 1;
	int *arr;

	cout << "Введите размер массива: " << endl;
	cin >> N;

	arr = new int[N];

	for (int i = 0; i < N; i++) {
		arr[i] = j;
		cout << "arr [" << i << "] = " << arr[i] << endl;
		j = j + 2;
	}
	delete[] arr;
	return 0;
}
