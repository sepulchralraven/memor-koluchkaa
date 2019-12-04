// LABA 15.1.cpp
// Даны массивы A и B одинакового размера N. Поменять местами их содержимое и вывести 
// вначале элементы преобразованного массива A, а затем — элементы преобразованного массива B.

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	setlocale(0, "");
	int N;
	int* A;
	int* B;
	cout << "Введите размер массива: " << endl;
	cin >> N;

	A = new int[N];
	B = new int[N];

	cout << "Введите ячейки массива А: " << endl;
	for (int i = 1; i < N + 1; i++) {
		cout << "A[" << i << "] = ";
		cin >> A[i];
	}
	cout << "Введите ячейки массива В: " << endl;
	for (int i = 1; i < N + 1; i++) {
		cout << "B[" << i << "] = ";
		cin >> B[i];
	}

	int q = 0;

	for (int i = 1; i < N + 1; i++) {
		q = A[i];
		A[i] = B[i];
		B[i] = q;
	}
	cout << "Преобразованный массив А: " << endl;
	for (int i = 1; i < N + 1; i++) {
		cout << "A[" << i << "] = " << A[i] << endl;
	}
	cout << "Преобразованный массив B: " << endl;
	for (int i = 1; i < N + 1; i++) {
		cout << "B[" << i << "] = " << B[i] << endl;
	}
	return 0;
}

