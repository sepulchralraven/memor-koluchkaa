<<<<<<< HEAD
﻿// LABA 15.3.cpp 
// Дан целочисленный массив размера N. Увеличить все нечетные числа, содержащиеся в массиве,
// на исходное значение последнего нечетного числа. Если нечетные числа в массиве отсутствуют,
// то оставить массив без изменений

#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	int N, lastodd;
	int* arr;

	cout << "Введите размер массива: " << endl;
	cin >> N;

	arr = new int[N];
	
	for (int i = 1; i < N + 1; i++) {
		cout << "arr[" << i << "] = ";
		cin >> arr[i];
	}
	for (int i = 1; i < N + 1; i++) {
		if (arr[i] % 2 != 0)
			lastodd = arr[i];
	}
	cout << "Измененный массив: " << endl;
	for (int i = 1; i < N + 1; i++) {
		if (arr[i] % 2 != 0) {
			arr[i] = arr[i] + lastodd;
			cout << "arr[" << i << "] = " << arr[i] << endl;
		}
		else
			cout << "arr[" << i << "] = " << arr[i]<< endl;
	}
	return 0;
}

=======
﻿// LABA 15.3.cpp 
// Дан целочисленный массив размера N. Увеличить все нечетные числа, содержащиеся в массиве,
// на исходное значение последнего нечетного числа. Если нечетные числа в массиве отсутствуют,
// то оставить массив без изменений

#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	int N, lastodd;
	int* arr;

	cout << "Введите размер массива: " << endl;
	cin >> N;

	arr = new int[N];
	
	for (int i = 1; i < N + 1; i++) {
		cout << "arr[" << i << "] = ";
		cin >> arr[i];
	}
	for (int i = 1; i < N + 1; i++) {
		if (arr[i] % 2 != 0)
			lastodd = arr[i];
	}
	cout << "Измененный массив: " << endl;
	for (int i = 1; i < N + 1; i++) {
		if (arr[i] % 2 != 0) {
			arr[i] = arr[i] + lastodd;
			cout << "arr[" << i << "] = " << arr[i] << endl;
		}
		else
			cout << "arr[" << i << "] = " << arr[i]<< endl;
	}
	return 0;
}

>>>>>>> c296bb92e58f0e80f8d03c1b12b84b2b4db41a7f
