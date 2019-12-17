#include <iostream>
#include "windows.h"
using namespace std;

int main()

{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char str[300];
	cout << "Введите строку: " << endl;
	cin >> str;

	int chars[256] = {0};

	for (int i = 0; str[i]; i++)
		chars[str[i]]++;

	for (int i = 0; i < 256; i++)
		if (chars[i])
			cout << char(i) << " = " << chars[i] << endl;
}