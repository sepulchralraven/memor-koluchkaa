// LABA 17.4.cpp
// Дано множество A из N точек (точки заданы своими координатами x, y). Среди всех точек этого множества, лежащих во второй 
// четверти, найти точку, наиболее удаленную от начала координат. Если таких точек нет, то вывести точку с нулевыми координатами

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int N, i, d, maxi, maxy, max;
	cout << "Enter array's size: " << endl;
	cin >> N;
	int* arr = new int[N];
	maxi = -100;
	maxy = 0;
	max = -1;
	for (i = 1; i < N + 1; i++)
	{
		cout << i << ".x :";
		cin >> arr[i, 1];
		cout << i << ".y :";
		cin >> arr[i, 2];
	}
	for (i = 1; i < N; i++)
	{
		d = sqrt(arr[i, 1] * arr[i, 1] + arr[i, 2] * arr[i, 2]);
		if (d > max)
		{
			max = d;
			maxi = arr[i, 1];
			maxy = arr[i, 2];
		}
	}
	cout << "The most far point in the second quarter" << maxi << ' ' << maxy;
	return 0;
}