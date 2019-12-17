// SORTIROVKA RASCHESKOY.cpp 

#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	int* arr;
	int N, t;
	
	cout << "Введите размер массива: " << endl;
	cin >> N;
	
	arr = new int[N];
	cout << "Изначальный массив:" << endl;
	for (int i = 0; i < N; i++) {
		cout << "arr[" << i << "] = ";
		cin >> arr[i];
	}
	int gap = N;
	bool flag = true;
	while (gap != 1 or flag == true) {
		gap = gap / 1.3 ;
		if (gap < 1)
			gap = 1;
		flag = false;
		for (int i = 0; i < N - gap; i++) {
			if (arr[i] > arr[i + gap]) {
				t = arr[i];
				arr[i] = arr[i + gap];
				arr[i + gap] = t;
				flag = true;
			}
		}
	}
	cout << "Отсортированный массив: " << endl;
	for (int i = 0; i < N; i++) {
		cout << "arr[" << i << "] = " << arr[i] << endl;
	}
}

