// LABA 16.2.cpp 
// Дан целочисленный массив размера N. Удалить из массива все элементы, встречающиеся ровно 
// два раза, и вывести размер полученного массива и его содержимое.

# include <iostream>
#include <Windows.h>
#include <cmath>
using namespace std;
int main()
{
	int l, t, N;
	
	cout << "Enter array's size: " << endl;
	cin >> N;

	int* arr = new int[N];

	cout << "Enter the array: " << endl;
	for (int i = 0; i < N; i++)
	{
		cout << "arr[" << i << "] = ";
		cin >> arr[i];
	}
	l = 0;
	int q = 0;
	for (int i = 0; i < N - 1; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (arr[i] == arr[j]) {
				l++;
				t = j;
			}
		}
		if (l == 2)
		{
			arr[i] = 0;
			arr[t] = 0;
		}
		l = 0;
	}
	cout << "The array is: " << endl;
	for (int i = 0; i < N; i++)
	{
		if (arr[i] != 0)
		{
			cout << arr[i] << " ";
			q++;
		}
	}
	cout << endl << "The array's size: " << endl << q;
	return 0;
}

