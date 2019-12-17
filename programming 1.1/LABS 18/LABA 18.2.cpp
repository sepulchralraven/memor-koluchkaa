// LABA 18.2.cpp 
// Дана матрица размера M × N и целое число K (1 ≤ K ≤ M). Найти сумму и произведение
// элементов K-й строки данной матрицы.

#include <iostream>
using namespace std;

int main()
{
	int M, N, K;
	int l = 1;
	int q = 0;

	cout << "Amount of rows: " << endl;
	cin >> M;

	cout << "Amount of cols: " << endl;
	cin >> N;

	cout << "Enter the number of row" << endl;
	cin >> K;

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
		q = q + arr[K][j];
		l = l * arr[K][j];
	}
	cout << "The sum of K-row = " << q << endl << "The composition of K-row = " << l;
}