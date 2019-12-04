// LABA 13.5.cpp 
// Дан массив A размера N. Вывести вначале его элементы с нечетными номерами в порядке
// возрастания номеров, а затем — элементы с четными номерами в порядке убывания номеров

#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	int* A, q;
	int N;

	cout << "Введите размер массива А: " << endl;
	cin >> N;

	q = 1;
	if (N % 2 == 1)
		q = 2;

	A = new int[N];
	for (int i = 0; i < N; i++) {
		cout << "A[" << i << "] = ";
		cin >> A[i];
	}
	cout << endl;
	for (int i = 0; i < N; i+= 2) {
		cout << "A[" << i << "] = " << A[i] << endl;
		int y = N - q - i;
		if (y > 0)
		cout << "A[" << y  << "] = " << A[y] << endl;
	}

	delete[] A;
	return 0;
}

