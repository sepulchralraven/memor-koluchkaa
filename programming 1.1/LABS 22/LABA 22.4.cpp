// LABA 22.4.cpp 
// Дан текстовый файл. Заменить в нем все подряд идущие пробелы на один пробел.

#include <iostream>
#include <string>
#include <fstream>
#include <clocale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	string path = "C:\\Users\\Zver\\Desktop\\лабы по программированию\\LABS 22\\LABA 22.4\\myFile.txt";
	fstream abc;
	abc.open(path);
	string s;
	if (!abc.is_open())
	{
		cout << "Ошибка открытия файла!" << endl;
	}
	else
	{
		while (abc >> s)
		{
			cout << ' ' << s;
		}
	}
	abc.close();
	return 0;
}