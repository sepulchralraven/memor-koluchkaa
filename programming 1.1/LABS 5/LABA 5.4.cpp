// LABA 5.4.cpp 
//Дано двузначное число. Вывести число, полученное при перестановке цифр исходного числа.


#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	int N, a, b;
	cout << "Введите двузначное число" << endl;
	cin >> N;
	a = N % 10;
	b = N / 10;
	N = a * 10 + b;
	cout << N;
	return 0;
}

