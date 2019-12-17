// LABA 20.1.cpp
// Дан символ C. Вывести два символа, первый из которых предшествует символу C в кодовой таблице,
// а второй следует за символом C.

#include <iostream>
using namespace std;

int main()
{
	char C;

	cout << "Enter a symbol: " << endl;
	cin >> C;

	cout <<  char (C - 1) << " " << char (C + 1);
}

