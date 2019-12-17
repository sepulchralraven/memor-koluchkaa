// LABA 22.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// Дано имя файла и целые положительные числа N и K. Создать текстовый файл с указанным именем и записать в него N строк,
// каждая из которых состоит из K символов «*» (звездочка).

#include <iostream>
#include <string>
#include <fstream>
#include <clocale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int n, k;
	string path = "C:\\Users\\Zver\\Desktop\\лабы по программированию\\LABS 22\\LABA 22.2\\myFile.txt";
	ofstream abc;
	abc.open(path);
	if (!abc.is_open())
	{
		cout << "Ошибка открытия файла!" << endl;
	}
	else
	{
		cout << "Введите количество строк: ";
		cin >> n;
		cout << "Введите количество * : ";
		cin >> k;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < k; j++)
			{
				abc << '*';
			}
			abc << endl;
		}
	}
	abc.close();
	return 0;
}