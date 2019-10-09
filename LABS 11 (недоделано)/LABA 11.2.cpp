// LABA 11.2.cpp 
// Даны положительные числа A и B (A > B). На отрезке длины A 
// размещено максимально возможное количество отрезков длины B 
// (без наложений). Не используя операции умножения и деления, 
// найти длину незанятой части отрезка A.

#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	unsigned int A, B, C;
	cout << "Введите А и В (A > B)" << endl;
	cin >> A >> B;
	for (int i = A; i >= B; i = i - B) {
		C = i - B;
	}
	cout << C;
}

