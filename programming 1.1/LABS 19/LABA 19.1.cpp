// LABA 19.1.cpp 
// Дана матрица размера M × N. Преобразовать матрицу, поменяв местами минимальный и максимальный элемент в каждой строке.

#include <iostream>
using namespace std;

int main()
{
	int M, N;

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
	for (int i = 1; i < M + 1; i++) {
		int min = 1, max = 1;
		for (int j = 1; j < N + 1; j++) {
			if (arr[i][min] > arr[i][j]) {
				min = j;
			}
			if (arr[i][max] < arr[i][j]) {
				max = j;
			}
		}
		int t = arr[i][min];
		arr[i][min] = arr[i][max];
		arr[i][max] = t;
	}
	cout << "Changed array: " << endl;
	for (int i = 1; i < M + 1; i++) {
		for (int j = 1; j < N + 1; j++)
			cout << arr[i][j] << " ";
		cout << endl;
	}
}

