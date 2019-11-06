// LABA 15.2.cpp 
// Дан массив A размера N. Сформировать новый массив B того же размера по следующему 
// правилу: элемент BK равен среднему арифметическому элементов массива A с номерами от 1 до K.

#include <iostream>
using namespace std;

int main()
{
	int N;
	int* A;
	float* B;
	
	cout << "Enter array's size: ";
	cin >> N;

	A = new int[N];
	B = new float[N];

	for (int i = 1; i < N + 1; i++) {
		cout << "A[" << i << "] = ";
		cin >> A[i];
	}
	int q = 0;
	int K = 0;
	for (int i = 1; i < N + 1; i++) {
		K = A[i] + K;
		q = q + 1;
		B[i] = (float) K / q;
	}
	for (int i = 1; i < N + 1; i++) {
		cout << "B[" << i << "] = " << B[i] << endl;
	}
	delete[] A, B;
}

