// LABA 17.3.cpp 
// Дано целое число K (> 0) и целочисленный массив размера N. Поменять местами последнюю серию массива и его серию с номером K 

# include <iostream> 
using namespace std;

int main()
{
	const int N = 10;
	int m[N], n[N], c[N], k, l, t, z, L;

	l = 1;
	t = 0;

	cout << "Enter the number of serie: ";
	cin >> L;
	L--;

	cout << "Enter the array: ";
	for (k = 0; k < N; k++)
		cin >> m[k];

	for (k = 0; k < N - 1; k++)
	{
		if (m[k] != m[k + 1])
		{
			n[t] = m[k];
			c[t] = l;
			l = 1;
			t++;
		}
		else
			l++;

	}

	n[t] = m[N - 1];
	c[t] = l;

	l = 0;
	for (k = 0; k < t; k++)
	{
		if (k == L)
		{
			for (z = 0; z < c[t]; z++)
			{
				m[l] = n[t];
				cout << m[l] << " ";
				l++;
			}
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

	for (k = 0; k < c[L]; k++)
	{
		m[l] = n[L];
		cout << m[l] << " ";
		l++;
	}
	return 0;
}