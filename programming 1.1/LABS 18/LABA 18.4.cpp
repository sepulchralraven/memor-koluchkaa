// LABA 18.4.cpp 
// Дана матрица размера M × N. В каждом ее столбце найти количество элементов,
// больших среднего арифметического всех элементов этого столбца

#include <iostream>
using namespace std;

int main()
{
	int M, N;
	float q = 0;
	int count = 0;
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
		for (int i = 1; i < M + 1; i++) {
			q = q + arr[i][j];
			count++;
		}
		q = (float) q / count;
		for (int i = 1; i < M + 1; i++) {
			if (arr[i][j] > q) {
				l++;
			}
		}
		cout << "In col " << j << ": " << l << " " << "elements more than arithmetical mean" << endl;
		q = 0;
		l = 0;
		count = 0;
	}
}

