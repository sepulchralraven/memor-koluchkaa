// LABA 11.3.cpp 
// Дано целое число N (> 1). Вывести наименьшее из целых чисел K,
// для которых сумма 1 + 2 + . . . + K будет больше или равна N,
// и саму эту сумму.

#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	unsigned int N, K;
	int sum = 0;
	cout << "Введите N" << endl;
	cin >> N;
	for (int i = 1; sum + i <= N; i++) {
		sum = sum + i;
		K = i;
	}
	cout << "Сумма чисел равна: " << sum << endl;
	cout << "Последнее число в сумме равно: " << K;
	return 0;
}

