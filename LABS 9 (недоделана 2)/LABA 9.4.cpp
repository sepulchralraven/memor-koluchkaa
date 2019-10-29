// LABA 9.4.cpp 
// Дано целое число в диапазоне 100–999. Вывести строку-описание
// данного числа, например: 256 — «двести пятьдесят шесть», 
// 814 — «восемьсот четырнадцать».

#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	int N, a, b, c;
	cout << "Введите число" << endl;
	cin >> N;
	a = N / 100;
	b = N / 10 % 10;
	c = N % 10;
	if (N >= 100 and N <= 999) {
		if (a > 0) {
			switch (a) {
			case 1:
				cout << "сто ";
				break;
			case 2:
				cout << "двести ";
				break;
			case 3:
				cout << "триста ";
				break;
			case 4:
				cout << "четыреста ";
				break;
			case 5:
				cout << "пятьсот ";
				break;
			case 6:
				cout << "шестьсот ";
				break;
			case 7:
				cout << "семьсот ";
				break;
			case 8:
				cout << "восемьсот ";
				break;
			case 9:
				cout << "девятьсот ";
				break;
			}
		}
		if (b > 1) {
			switch (b) {
			case 2:
				cout << "двадцать ";
				break;
			case 3:
				cout << "тридцать ";
				break;
			case 4:
				cout << "сорок ";
				break;
			case 5:
				cout << "пятьдесят ";
				break;
			case 6:
				cout << "шестьдесят ";
				break;
			case 7:
				cout << "семьдесят ";
				break;
			case 8:
				cout << "восемьдесят ";
				break;
			case 9:
				cout << "девяносто ";
				break;
			}
		}
		if (c > 0) {
			switch (c) {
			case 1:
				cout << "один";
				break;
			case 2:
				cout << "два";
				break;
			case 3:
				cout << "три";
				break;
			case 4:
				cout << "четыре";
				break;
			case 5:
				cout << "пять";
				break;
			case 6:
				cout << "шесть";
				break;
			case 7:
				cout << "семь";
				break;
			case 8:
				cout << "восемь";
				break;
			case 9:
				cout << "девять";
				break;
			}
		}
	}
	else
		cout << "ашибка";
	return 0;
}