// LABA 7.2.cpp 

#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	int A, B, C;
	cout << "Истинно ли данное высказывание?? (A < B < C) Введите A, B и С" << endl;
	cin >> A >> B >> C;
	if (A < B and B < C) {
		cout << "Высказывание истинно";
	}
	else
		cout << "Высказывание ложно";
}