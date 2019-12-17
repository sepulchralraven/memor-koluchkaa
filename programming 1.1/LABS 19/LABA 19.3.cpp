// LABA 19.3.cpp 
// Дана матрица размера M × N (M и N — четные числа). Поменять местами левую верхнюю и правую нижнюю четверти матрицы

#include <iostream>
using namespace std;

int main()
{
	int M, N;
	int t;

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

	for (int i = 1; i < M / 2 + 1; i++) {
		for (int j = 1; j < N / 2 + 1; j++) {
			int q = M / 2;
			int w = N / 2;
			t = arr[i][j];
			arr[i][j] = arr[i + q][j + w];
			arr[i + q][j + w] = t;
		}
	}

	cout << "Changed array: " << endl;
	
	for (int i = 1; i < M + 1; i++) {
		for (int j = 1; j < N + 1; j++) {
			cout << arr[i][j] << ' ';
			
		}
		cout << endl;
	}
}

