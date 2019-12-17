// LABA 22.5.cpp 
// Дан текстовый файл. Найти количество абзацев в тексте, если первая строка каждого абзаца начинается с 5 пробелов
// («красная строка»). Пустые строки между абзацами не учитывать.

#include <iostream>
#include <string>
#include <fstream>
#include <clocale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int k = 0;
	string path = "C:\\Users\\Zver\\Desktop\\лабы по программированию\\LABS 22\\LABA 22.5\\myFile.txt";
	ifstream abc;
	abc.open(path);
	string s;
	if (!abc.is_open())
	{
		cout << "Ошибка открытия файла!" << endl;
	}
	else
	{

		while (!abc.eof())
		{
			getline(abc, s);
			if (s.substr(0, 5) == "     ")
			{
				k++;
			}
		}
	}
	abc.close();
	cout << k;
	return 0;
}