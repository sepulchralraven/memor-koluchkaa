// LABA 20.4.cpp 
// Дан символ C и строка S. Удвоить каждое вхождение символа C в строку S

#include <iostream>
using namespace std;

int main()
{
	char C;
	int S;

	cout << "Enter array's size: " << endl;
	cin >> S;

	cout << "Element: ";
	cin >> C;

	char* str = new char[S];

	for (int i = 0; i < S; i++) {
		cin >> str[i];
	}


	for (int i = 0; i < S; i++) {
		if (C == str[i]) {
			cout << str[i] << str[i];
		}
		else
			cout << str[i];
	}
}

