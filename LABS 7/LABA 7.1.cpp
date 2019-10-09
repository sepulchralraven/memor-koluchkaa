// LABA 7.1.cpp 

#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	int A, B;
	bool a;
	cout << "Истинно ли выражение A > 2 и B <= 3? Введите А и В " << endl;
	cin >> A >> B;
	if (A > 2 and B <= 3) {
		cout << "Высказывание истинно";
	} 
	else 
		cout << "Высказывание ложно";
}