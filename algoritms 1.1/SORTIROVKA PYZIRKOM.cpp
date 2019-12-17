// Сортировка пузырьком

#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	int *arr; 
	int n; 

	cout << "Введите размер массива: " << endl;
	cin >> n;

	arr = new int[n]; 

	for (int i = 0; i < n; i++) {
		cout << "arr[" << i << "] = ";
		cin >> arr[i];
	}

	int t; 

	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				t = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = t;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

	delete[] arr;
	return 0;
}