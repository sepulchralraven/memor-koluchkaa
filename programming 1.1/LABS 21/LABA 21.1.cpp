// LABA 21.1.cpp
//
#include <iostream>
#include <iterator>
#include <sstream>
#include <string>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "rus");
	string str;
	getline(cin, str);
	istringstream ist(str);
	cout << distance(istream_iterator<string>(ist), istream_iterator<string>());
}

