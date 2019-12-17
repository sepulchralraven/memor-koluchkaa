// LABA 17.2.cpp 
// Дано целое число L (> 0) и целочисленный массив размера N. Заменить каждую серию массива, длина которой больше L, 
// на один элемент с нулевым значением

# include <iostream> 
#include <Windows.h> 
#include <cmath> 
using namespace std;
int main()
{
	const int N = 10;
	int m[N], n[N], c[N], k, l, t, z, L;

	l = 1;
	t = 0;

	cout << "Enter the serie: ";
	cin >> L;

	cout << "Enter the array: ";
	for (k = 0; k < N; k++)
		cin >> m[k];

	for (k = 0; k < N - 1; k++) {
		if (m[k] != m[k + 1]) {
			n[t] = m[k];
			c[t] = l;
			l = 1;
			t++;
		}
		else l++;

	}

	n[t] = m[N - 1];
	c[t] = l;


	l = 0;
	for (k = 0; k <= t; k++)
	{
		if (c[k] > L)
		{
			m[l] = 0;
			cout << m[l] << " ";
			l++;
		}
		else
		{
			for (z = 0; z < c[k]; z++)
			{
				m[l] = n[k];
				cout << m[l] << " ";
				l++;
			}
		}
	}

	return 0;
}
