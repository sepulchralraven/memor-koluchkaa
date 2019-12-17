
#include <iostream>
using namespace std;

int main()
{
	int size;

	cout << "Enter size: ";
	cin >> size;

	int* arr = new int[size];

	for (int i = 0; i < size; i++) {
		cout << "arr[" << i << "] = ";
		cin >> arr[i];
	}

	int step = size / 2;
	while (step > 0) {
		for (int i = 0; i < (size - step); i++) {
			int x = i;
			while (x >= 0 and arr[x] > arr[x + step]) {
				int t = arr[x];
				arr[x] = arr[x + step];
				arr[x + step] = t;
				x--;
			}
		}
		step = step / 2;

	}
	cout << "Changed array: " << endl;
	for (int i = 0; i < size; i++) {
		cout << "arr[" << i << "] = " << arr[i] << endl;
	}
	return 0;
}

