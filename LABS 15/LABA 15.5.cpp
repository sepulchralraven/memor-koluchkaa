// LABA 15.5.cpp 
// Дан массив размера N, все элементы которого, кроме первого, упорядочены по возрастанию.
// Сделать массив упорядоченным, переместив первый элемент на новую позицию.

#include <iostream>
using namespace std;

int main()
{
	int N, x;
	int* arr;

	cout << "Enter array's size: " << endl;
	cin >> N;

	arr = new int[N];

	for (int i = 0; i < N; i++) {
		cout << "arr[" << i << "] = ";
		cin >> arr[i];
	}

	for (int i = 1; i < N; i++) {
		x = arr[i];
		int j = i - 1;
		while (x < arr[j]) {
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = x;
	}

	cout << endl;
	cout << "Ordered array: " << endl;
	for (int i = 0; i < N; i++) 
		cout << "arr[" << i << "] = " << arr[i] << endl;

	return 0;
}

