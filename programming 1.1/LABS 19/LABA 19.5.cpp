// LABA 19.5.cpp 
// Дана квадратная матрица A порядка M. Найти сумму элементов каждой ее диагонали, параллельной 
// главной (начиная с одноэлементной диагонали).

#include <iostream>
using namespace std;

int main()
{
	int M, S;

	cout << "Amount of rows and cols: " << endl;
	cin >> M;


	int** arr = new int* [M];

	for (int i = 0; i < M; i++)
	{
		arr[i] = new int[M];
	}

	for (int i = 0; i < M; i++) {
		for (int j = 0; j < M; j++) {
			cin >> arr[i][j];
		}
	}
	for (int i = 0; i < M; ++i) {
		S = 0;
		for (int j = i; j >= 0; --j) {
			S = S + arr[i - j][M - 1 - j];
		}
		cout << " Sum: " << S << endl;
	}

	for (int j = 1; j < M; ++j) {
		S = 0;
		for (int i = j; i < M; ++i) {
			S = S + arr[i][i - j];
		}
		cout << "Sum: " << S << endl;
	}
}

