// LABA 21.3.cpp 
// Дана строка, состоящая из русских слов, набранных заглавными буквами и разделенных пробелами
// (одним или несколькими). Преобразовать каждое слово в строке, заменив в нем все 
// последующие вхождения его первой буквы на символ «.» (точка). Например, слово
// «МИНИМУМ» надо преобразовать в «МИНИ.У.». Количество пробелов между словами не изменять

# include <iostream>
#include <Windows.h>
#include <string>
using namespace std;
int main()
{
	string s, s2;
	bool l;
	char t;
	int k;
	setlocale(LC_ALL, "rus");
	k = 0;
	s2 = "";
	s = " " + s;
	t = char();
	l = false;
	s = "  МИНИМУМ СЕМЬСОТ ДЕВЯТЬ ТЫСЯЧ ";
	for (int i = 0; i < s.length(); i++)
	{
		if ((s[i] != char(32)) and (l == false))
		{
			t = s[i];
			l = true;
			s2 = s2 + s[i];
		}
		else
		{
			if (s[i] == t)
				s2 = s2 + ".";
			else
				if (s[i] == char(32))
				{
					s2 = s2 + s[i];
					l = false;
				}
				else
					s2 = s2 + s[i];
		}
	}
	cout << "Измененная строка: " << s2;
	return 0;
}