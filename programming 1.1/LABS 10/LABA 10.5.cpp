// LABA 10.5.cpp 
// Дано вещественное число A и целое число N (> 0).
// Используя один цикл, найти значение выражения 
// 1 − A + A2 − A3 + . . . ± AN . 
// Условный оператор не использовать.


#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	float A;
	int j = 0;
	unsigned int N;
	cout << "Введите A и N" << endl;
	cin >> A >> N;
	for (int i = 0; i <= N; i++) {
		j = j + (pow(-1, i) * pow(A, i));
	}
	cout << j;
	return 0;
}

