// LABA 5.1.cpp
// Дан размер файла в байтах. Найти количество полных килобайтов, которые занимает данный файл

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	setlocale(0, "");
	int B, KB;
	cout << "Введите размер файла в байтах: ";
	cin >> B;
	KB = B / pow (2, 10);
	cout << "Размер файла в килобайтах равен: " << KB;
	return 0;
}