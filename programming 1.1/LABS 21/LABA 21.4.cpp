// LABA 21.4.cpp 
// Дана строка-предложение на русском языке. Подсчитать количество содержащихся в строке гласных букв.

# include <iostream>
#include <Windows.h>
#include <string>
using namespace std;
int main()
{
	string s;
	int q;
	q = 0;
	setlocale(LC_ALL, "rus");
	s = " алооо всем привет";
	for (int i = 0; i < s.length(); i++)
	{
		if ((s[i] == 'а') or (s[i] == 'у') or (s[i] == 'е') or (s[i] == 'ы') or (s[i] == 'о') or (s[i] == 'э') or (s[i] == 'я') or (s[i] == 'и') or (s[i] == 'ю'))
			q++;
	}
	cout << "Количество гласных в строке: " << q;
	return 0;
}