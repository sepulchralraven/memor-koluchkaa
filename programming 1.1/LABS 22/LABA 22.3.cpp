// LABA 22.3.cpp 
// Даны два текстовых файла. Добавить в начало первого файла содержимое второго файла

#include <iostream>
#include <string>
#include <fstream>
#include <clocale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	char a[500];
	string path = "C:\\Users\\Zver\\Desktop\\лабы по программированию\\LABS 22\\LABA 22.3\\myFile.txt";
	string d = "C:\\Users\\Zver\\Desktop\\лабы по программированию\\LABS 22\\LABA 22.3\\file.txt";
	ofstream prt;
	prt.open(d, ofstream::app);
	ifstream abc;
	abc.open(path, ifstream::app);
	while (!abc.eof())
	{
		abc.getline(a, sizeof(a));
		prt << a << endl;
	}
	abc.close();
	prt.close();
	return 0;
}