// wgwegwrgsdvsdv.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
	int M, N, maxj, minj;

	cout << "Enter rows: ";
	cin >> M;
	cout << "Enter cols: ";
	cin >> N;
	double max, min;

	int** arr = new int* [M];
	for (int i = 0; i < M; i++)
		arr[i] = new int[N];

	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			cin >> arr[i][j];
		}
	}
	max = min = arr[0][0];
	maxj = minj = 0; //на всякий, если условие ниже не выполнится, чтобы было знач. 0

	for (int j = 0; j < N; j++) {
		for (int i = 0; i < M; i++) {
			if (max < arr[i][j]) {
				max = arr[i][j];
				maxj = j;
			}

			if (min > arr[i][j]) {
				min = arr[i][j];
				minj = j;
			}
		}
	}

	if (maxj == minj)
		cout << "Max and Min elements are on the same column";
	else
	{
		for (int i = 0; i < M; i++) {
			int t = arr[i][maxj];
			arr[i][maxj] = arr[i][minj];
			arr[i][minj] = t;
		}

		cout << "After change: " << endl;

		for (int i = 0; i < M; i++)
		{
			for (int j = 0; j < N; j++)
				cout << arr[i][j] << " ";
			cout << endl;
		}
	}
}

