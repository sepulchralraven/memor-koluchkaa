// LABA 13.3.cpp 
// Даны целые числа N (> 2), A и B. Сформировать и вывести целочисленный массив
// размера N, первый элемент которого равен A, второй равен B, а каждый 
// последующий элемент равен сумме всех предыдущих

#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	int* arr;
	int N, A, B, C;

	cout << "Введите размер массива: " << endl;
	cin >> N;
	arr = new int[N];
	cout << "Введите А и В: " << endl;
	cin >> A >> B;
	arr[0] = A;
	arr[1] = B;
	cout << "arr[0] = " << A << endl << "arr[1] = " << B << endl;
	C = 0;
	for (int i = 2; i < N; i++) {
		C = A + B + C;
		arr[i] = C;
		cout << "arr [" << i << "] = " << arr[i] << endl;
	}
	delete[] arr;
	return 0;
}

