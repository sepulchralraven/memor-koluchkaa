// LABA 18.3.cpp 
// Дана матрица размера M × N. Найти номер ее столбца с наименьшим произведением 
// элементов и вывести данный номер, а также значение наименьшего произведения.

#include <iostream>
using namespace std;

int main()
{
	int M, N, K;
	int min = 100000;
	int q = 1;
	int l = 0;

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
		for (int i = 1; i < M + 1; i+=j) {
			q = q * arr[i][j];
		}
		if (q < min) {
			min = q;
			l = j;
		}
	}
	cout << "The col with the least product: " << l << endl << "and it's product: " << min;
}

