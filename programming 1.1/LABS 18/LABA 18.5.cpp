// LABA 18.5.cpp 
// Дана целочисленная матрица размера M × N. Найти номер первого из ее столбцов, содержащих 
// только нечетные числа. Если таких столбцов нет, то вывести 0.

#include <iostream>
using namespace std;

int main()
{
	int M, N;
	int q = 0;

	cout << "Amount of rows: " << endl;
	cin >> M;

	cout << "Amount of cols: " << endl;
	cin >> N;

	int** arr = new int* [M];

	for (int i = 1; i < M + 1; i++)
	{
		arr[i] = new int[N];
	}

	for (int i = 1; i < M + 1; i++) {
		for (int j = 1; j < N + 1; j++) {
			cin >> arr[i][j];
		}
	}
	for (int j = 1; j < N + 1; j++) {
		for (int i = 1; i < M + 1; i++) {
			if (arr[i][j] % 2 != 0) {
				q++;
			}
			if (q == i)
				cout << "The first col that contains only odd elements: " << j;
			return 0;
		}
	}
	cout << 0;
}
