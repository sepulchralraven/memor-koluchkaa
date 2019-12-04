// LABA 13.4.cpp 
// Дан массив A размера N. Вывести его элементы в следующем порядке:
// A1, AN , A2, AN−1, A3, AN−2,

#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	int* A;
	int N;

	cout << "Введите размер массива А: " << endl;
	cin >> N;

	A = new int[N];
	for (int i = 0; i < N; i++) {
		cout << "A[" << i << "] = ";
		cin >> A[i];
	 }
	cout << endl;
	for (int i = 0; i < N - i; i++) {
		cout << "A[" << i << "] = " << A[i] << endl;
		cout << "A[" << N - i -1 << "] = " << A[N -1 - i] << endl;
	}

	delete[] A;
	return 0;
}

