// LABA 21.5.cpp 
// Дана строка, содержащая полное имя файла, то есть имя диска, список каталогов (путь), 
// собственно имя и расширение. Выделить из этой строки имя файла (без расширения)

#include <iostream>
#include <Windows.h>
#include <string>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char S[500];
	cout << "Введите полное имя файла: ";
	gets_s(S);
	int t = 0, k = 0;
	for (int i = 0; S[i] != 0; i++) {
		if (S[i] == '\\')
			t = i;
		if (S[i] == '.')
			k = i; 
	}
	for (int i = t + 1; i < k; i++) {
		cout << S[i];
	}
	return 0;
}
