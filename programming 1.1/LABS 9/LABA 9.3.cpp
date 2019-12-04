// LABA 9.3.cpp 
// Дано целое число в диапазоне 10–40, определяющее количество учебных
// заданий по некоторой теме. Вывести строку-описание указанного количества 
// заданий, обеспечив правильное согласование числа со словами «учебное задание»,
// например: 18 — «восемнадцать учебных заданий»

#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	int a, b, c;
	cout << "Введите число: " << endl;
	cin >> a;
	b = a / 10;
	c = a % 10;
	if (b > 1) {
		switch (b) {
		case 2:
			cout << "двадцать ";
			break;
		case 3:
			cout << "тридцать ";
			break;
		case 4:
			cout << "cорок ";
			break;
		}
	}
	if (c != 0) {
		switch (c) {
		case 1:
			cout << "одно ";
			break;
		case 2:
			cout << "два ";
			break;
		case 3:
			cout << "три ";
			break;
		case 4:
			cout << "четыре ";
			break;
		case 5:
			cout << "пять ";
			break;
		case 6:
			cout << "шесть ";
			break;
		case 7:
			cout << "семь ";
			break;
		case 8:
			cout << "восемь ";
			break;
		case 9:
			cout << "девять ";
			break;
		case 10:
			cout << "десять ";
			break;
		case 11:
			cout << "одиннадцать ";
			break;
		case 12:
			cout << "двенадцать ";
			break;
		case 13:
			cout << "тринадцать ";
			break;
		case 14:
			cout << "четырнадцать ";
			break;
		case 15:
			cout << "пятнадцать ";
			break;
		case 16:
			cout << "шестнадцать ";
			break;
		case 17:
			cout << "семнадцать ";
			break;
		case 18:
			cout << "восемнадцать ";
			break;
		case 19:
			cout << "девятнадцать ";
			break;
		}
	}
	if (c == 1) {
		cout << "учебное задание";
	}
	else
		cout << "учебных заданий";
}