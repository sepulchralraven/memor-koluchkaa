// LABA 13.2.cpp 

// Дано целое число N (> 1), а также первый член A и знаменатель D геометрической
// прогрессии. Сформировать и вывести массив размера N, содержащий N первых членов
// данной прогрессии: A, A•D, A•D2 , A•D3 , . . .

#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	int N;
	float A, D;
	int* arr;

	cout << "Введите размер массива (N > 1):" << endl;
	cin >> N;
	arr = new int[N];

	cout << "Введите первый член прогрессии и знаменатель: " << endl;
	cin >> A >> D;

	for (int i = 0; i < N; i++) {
		arr[i] = A;
		cout << "arr [" << i << "] = " << arr[i] << endl;
		A = A * D;
	}
	delete[] arr;
	return 0;
}

