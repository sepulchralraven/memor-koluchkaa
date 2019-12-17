// LABA 21.6.cpp 
// Дана строка, содержащая полное имя файла. Выделить из этой строки название последнего каталога (без символов «\»). 
// Если файл содержится в корневом каталоге, то вывести символ «\».

#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char S[500];
	cout << "Введите полное имя файла: ";
	gets_s(S);
	int  t, k = 0;
	for (int i = 1; S[i] != 0; i++)
	{
		if (S[i] == '\\')
		{
			t = k;
			k = i;
		}
	}
	if (t == 0)
	{
		cout << '\\';
	}
	else
	{
		for (int i = t + 1; i < k; i++)
		{
			cout << S[i];
		}
	}
	return 0;
}