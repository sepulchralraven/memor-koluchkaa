// LABA 10.2.cpp 
// Дано целое число N (> 0).
// Найти произведение 1.1 • 1.2 • 1.3 • . . . (N сомножителей).

#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	unsigned int N;
	float a = 1;
	cout << "Введите N" << endl;
	cin >> N;
	for (double i = 1, j = 1.1; i <= N; i++, j += 0.1) {
		a = a * j;
	}
	cout << "Произведение равно: " << a;
	return 0;
}

