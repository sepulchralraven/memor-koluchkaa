// LABA 10.4.cpp 
// . Дано вещественное число A и целое число N (> 0). Используя один
// цикл, найти сумму 1 + A + A2 + A3 + . . . + AN

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	setlocale(0, "");
	float A;
	int j = 0;
	unsigned int N;
	cout << "Введите А и N" << endl;
	cin >> A >> N;
	for (int i = 0; i <= N; i++) {
		j = j + pow(A, i);
	}
	cout << j;
	return 0;
}