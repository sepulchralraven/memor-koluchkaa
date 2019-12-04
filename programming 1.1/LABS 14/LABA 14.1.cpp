// LABA 14.1.cpp
// Дан массив размера N и целые числа K и L (1 ≤ K ≤ L ≤ N). Найти среднее 
// арифметическое элементов массива с номерами от K до L включительно.

#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	int N, K, L, q;
	float G;
	int* A;

	cout << "Введите размер массива: " << endl;
	cin >> N;
	
	A = new int[N];

	cout << "Введите номера массива: " << endl;
	cin >> K >> L;

	for (int i = 0; i < N; i++) {
		cout << "A[" << i << "] = ";
		cin >> A[i];
	}
	q = 0;
	G = 0;
	while (K <= L) {
		q = q + A[K];
		K = K + 1;
		G++;
	}
	cout << "Среднее арифметическое элементов массива равно: " << q / G << endl;
	delete[] A;
	return 0;
}

