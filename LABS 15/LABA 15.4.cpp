// LABA 15.4.cpp 
// Дан массив размера N. Обнулить элементы массива, расположенные между его минимальным
// и максимальным элементами (не включая минимальный и максимальный элементы).

#include <iostream>
using namespace std;

int main()
{
	int N, min, max, K, Q;
	int* arr;
	K = -1;
	Q = -1;

	cout << "Enter array's size: " << endl;
	cin >> N;

	arr = new int[N];

	for (int i = 1; i < N + 1; i++) {
		cout << "arr[" << i << "] = ";
		cin >> arr[i];
	}
	max = -999;
	min = 1000;
	for (int i = 1; i < N + 1; i++) {
		if (arr[i] > max) {
			max = arr[i];
			K = i;
		}
	}
	for (int i = 1; i < N + 1; i++) {
		if (arr[i] < min) {
			min = arr[i];
			Q = i;
		}
	}
	for (int i = 1; i < N + 1; i++) {
		if (((i > Q) and (i < K)) or ((i < Q) and (i > K))) {
			arr[i] = 0;
		}
	}
	cout << endl;
	cout << "Changed array: " << endl;
	for (int i = 1; i < N + 1; i++) 
		cout << "arr[" << i << "] = " << arr[i]<< endl;
	return 0;
}

