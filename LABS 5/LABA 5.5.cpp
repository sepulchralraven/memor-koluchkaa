// LABA 5.5.cpp 
// Дано трехзначное число. В нем зачеркнули первую слева цифру и приписали
// ее справа. Вывести полученное число.

#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	int N, a, b, c;
	cout << "Введите трехзначное число: " << endl;
	cin >> N; 
	a = N / 10 / 10;
	b = N / 10 % 10;
	c = N % 10;
	N = b * 100 + c * 10 + a;
	cout << N;
	return 0;
}

