// LABA 20.5.cpp 
// Даны строки S и S0. Найти количество вхождений строки S0 в строку S.

# include <iostream>
using namespace std;
int main()
{
	string S, S0, m;
	int l, v, q;
	q = 0;
	m = "";
	cout << "Enter the string: ";
	cin >> S;
	cout << "Enter another string: ";
	cin >> S0;
	cout << endl;
	l = S.length();
	v = S0.length();
	for (int i = 0; i < l - v + 1; i++)
	{
		for (int j = 0; j < v; j++)
			m = m + S[j + i];
		if (m == S0)
		{
			q++;
		}
		m = "";
	}

	cout << q;
	return 0;
}
