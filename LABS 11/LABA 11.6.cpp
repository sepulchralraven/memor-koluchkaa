// LABA 11.6.cpp 
// Дано целое число N (> 1), являющееся числом Фибоначчи: N = FK.
// Найти целое число K — порядковый номер числа Фибоначчи N.

#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	int N, K, q, i, j;
	cout << "Введите число Фибоначчи: " << endl;
	cin >> N;
	if (N == 0) {
		cout << "Его порядковый номер K = 1";
	}
	else if (N == 1) {
		cout << "Его порядковый номер К = 2 или 3";
	}
	else {
		q = 0;
		j = 0;
		i = 1;
		for (K = 2; q < N; K++) {
			q = j + i;
			j = i;
			i = q;
		}
		cout << "Его порядковый номер K = " << K;
		return 0;
	}
}
