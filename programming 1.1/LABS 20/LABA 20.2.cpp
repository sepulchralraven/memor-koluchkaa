// LABA 20.2.cpp 
// Дана непустая строка S. Вывести строку, содержащую символы строки S, между которыми вставлено по одному пробелу.

#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

int main()
{
	int S;

	cout << "Enter the size of string: " << endl;
	cin >> S;

	char* str = new char[S];

	for (int i = 0; i < S; i++) {
		cin >> str[i];
	}

	int i = 0;
	for (int i = 0; i < S; i++) {
		if (str[i] != ' ')
			cout << str[i] << ' ';
		else
			cout << str[i];
	}
}

