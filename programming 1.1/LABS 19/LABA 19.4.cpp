// LABA 19.4.cpp
// Дана матрица размера M × N. Упорядочить ее строки так, чтобы их первые элементы 
// образовывали возрастающую последовательность.

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

	for (int i = 1; i < M; i++) {
		for (int l = i + 1; l < M + 1; l++) {
			if (arr[i][1] > arr[l][1]) {
				for (int j = 1; j < N + 1; j++) {
					int t = arr[i][j];
					arr[i][j] = arr[l][j];
					arr[l][j] = t;
				}
			}
		}
	}
	
	cout << "Changed matrix: " << endl;
	for (int i = 1; i < M + 1; i++) {
		for (int j = 1; j < N + 1; j++) {
			cout << arr[i][j] << ' ';
		}
		cout << endl;
	}
}

