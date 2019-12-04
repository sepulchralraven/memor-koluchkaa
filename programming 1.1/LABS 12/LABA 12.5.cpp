// LABA 12.5.cpp
// 5. Описать функцию Fact2(N) вещественного типа, вычисляющую двойной факториал: 
// N!!= 1•3•5•. ..•N, если N — нечетное;
// N!!= 2•4•6•. ..•N, если N — четное(N > 0 — параметр целого типа;
// вещественное возвращаемое значение используется для того,
// чтобы избежать целочисленного переполнения при больших значениях N).


#include <iostream>
using namespace std;

float Fact2(float N) {
	float K;
	int A;
	K = N;
	A = K / 1;
	N = 1;
	if (A % 2 != 0) {
		for (int i = 1; i < K; i = i + 2) {
			N = N * i;
		}
		N = N * K;
	}
	else {
		for (int i = 2; i < K; i = i + 2) {
			N = N * i;
		}
		N = N * K;
	}
	return N;
}

int main()
{
	setlocale(0, "");
	float N;
	cout << "Введите число N: " << endl;
	cin >> N;
	cout << "Его двойной факториал равен: " << Fact2(N);
	return 0;
}

