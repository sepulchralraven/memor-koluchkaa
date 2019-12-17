// LABA 20.3.cpp 
// Дана строка. Подсчитать количество содержащихся в ней прописных латинских букв.

#include <iostream>
using namespace std;

int main()
{
	int S;
	int count = 0;

	cout << "Enter array's size: " << endl;
	cin >> S;

	char* str = new char[S];

	for (int i = 0; i < S; i++) {
		cin >> str[i];
	}

	for (int i = 0; i < S; i++) {
		if (str[i] >= 'A' && str[i] <= 'Z')
			count++;
	}
	cout << "Amount of capital letters are: " << count;
	return 0;
}

