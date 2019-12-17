// LABA 17.1.cpp 
// Дан целочисленный массив A размера N. Назовем серией группу подряд идущих одинаковых элементов,
// а длиной серии — количество этих элементов (длина серии может быть равна 1).
// Сформировать два новых целочисленных массива B и C одинакового размера, записав в массив
// B длины всех серий исходного массива, а в массив C — значения элементов, образующих эти серии

#include <iostream>
using namespace std;

int main()
{
	int N, x, l, k, Q;

	cout << "Enter array's size: " << endl;
	cin >> N;

	int* arr = new int[N];
	int* barr = new int[N];
	int* carr = new int[N];

	for (int i = 0; i < N; i++) {
		cout << "arr[" << i << "] = ";
		cin >> arr[i];
	}

	x = l = k = 0;
	for (int i = l; i < N; i++)
	{
		if (arr[i + 1] == arr[i])
		{
			x++;
		}
		else
		{
			l = x;
			Q = arr[i];
			l++;
			barr[k] = l;
			carr[k] = Q;
			k++;
			x = 0;
		}
	}
	cout << "Array from series: " << endl;
	for (int i = 0; i < k; i++)
	{
		cout << barr[i] << " ";
	}
	cout << endl;
	cout << "Array from elements: " << endl;
	for (int i = 0; i < k; i++)
	{
		cout << carr[i] << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}
