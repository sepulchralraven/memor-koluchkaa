// LABA 7.4.cpp 

#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	int N, a, b, c;
	cout << "Введите трехзначное число" << endl;
	cin >> N;
	c = N % 10;
	b = N % 100 / 10;
	a = N / 100;
	if (a > b and b > c) {
		cout << "Высказывание истинно";
	}
	else if (c > b and b > a)
		cout << "Высказывание истинно";
	else 
	    cout << "Высказывание ложно";
}
