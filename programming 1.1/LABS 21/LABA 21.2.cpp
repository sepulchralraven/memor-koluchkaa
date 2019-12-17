// LABA 21.2.cpp 
// Дана строка, состоящая из русских слов, разделенных пробелами (одним или несколькими). 
// Найти длину самого короткого слова

#include <iostream>
#include <Windows.h>
#include <string>
using namespace std;

int main()
{
	string S;
	int k, min;
	setlocale(LC_ALL, "rus");
	k = 0;
	S = "всем привет меня зовут лиза";
	min = S.length();
	for (int i = 0; i < S.length(); i++)
	{
		if (S[i] != ' ')
			k++;
		else
		{
			if ((k < min) and (k != 0))
				min = k;
			k = 0;
		}
	}
	cout << "The length of the shortest word: " << min;
	return 0;

}

