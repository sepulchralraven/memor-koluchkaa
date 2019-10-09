// LABA 11.1.cpp 

// Даны целые положительные числа A и B (A < B). Вывести все целые числа
// от A до B включительно; при этом каждое число должно выводиться столько
// раз, каково его значение (например, число 3 выводится 3 раза).

#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	unsigned int A, B;
	cout << "Введите А и В (A < B)" << endl;
	cin >> A >> B;
	for (int i = A; i <= B; i++) {
		for (int j = 1; j <= i; j++) {
			cout << i;
		}
		cout << endl;
	}
	return 0;
}

