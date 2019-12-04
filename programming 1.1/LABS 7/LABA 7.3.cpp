// LABA 7.3.cpp 

#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	unsigned int N;
	int a;
	cout << "Является ли число четным двузначным?" << endl;
	cin >> N;
	a = N % 2;
	if (N >=10 and N <= 99 and a == 0) {
		cout << "Число четно и двузначно";
	}
	else
		cout << "Число не является и четным, и двузнычным";
}