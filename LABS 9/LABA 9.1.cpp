// LABA 9.1.cpp 
// Дан номер дня – целое число от 1 до 31 и месяца — целое число в диапазоне 1–12
// (1 — январь, 2 — февраль и т. д.). Вывести дату в виде текста (например, «пятое января»).

#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	int d, m, a, b;
	cout << "Введите день и месяц" << endl;
	cin >> d >> m;
	a = d / 10;
	b = d % 10;
	if (d == 20 or d == 30) {
		switch (a) {
		case 2:
			cout << "Двадцатое ";
			break;
		case 3:
			cout << "Тридцатое ";
			break;
		}
	}
	if (a > 1 and b != 0) {
		switch (a) {
		case 2:
			cout << "Двадцать ";
			break;
		case 3:
			cout << "Тридцать ";
			break;
		}
	}
	if (d > 20 and b != 0) {
		switch (b) {
		case 1:
			cout << "первое ";
			break;
		case 2:
			cout << "второе ";
			break;
		case 3:
			cout << "третье ";
			break;
		case 4:
			cout << "четвертое ";
			break;
		case 5:
			cout << "пятое ";
			break;
		case 6:
			cout << "шестое ";
			break;
		case 7:
			cout << "седьмое ";
			break;
		case 8:
			cout << "восьмое ";
			break;
		case 9:
			cout << "девятое ";
			break;
		}
	}
	switch (d) {
	case 1:
		cout << "Первое ";
		break;
	case 2: 
		cout << "Второе ";
		break;
	case 3:
		cout << "Третье ";
		break;
	case 4:
		cout << "Четвертое ";
		break;
	case 5:
		cout << "Пятое ";
		break;
	case 6:
		cout << "Шестое ";
		break;
	case 7:
		cout << "Седьмое ";
		break;
	case 8:
		cout << "Восьмое ";
		break;
	case 9:
		cout << "Девятое ";
		break;
	case 10:
		cout << "Десятое ";
		break;
	case 11:
		cout << "Одиннадцатое ";
		break;
	case 12:
		cout << "Двенадцатое ";
		break;
	case 13:
		cout << "Тринадцатое ";
		break;
	case 14:
		cout << "Четырнадцатое ";
		break;
	case 15:
		cout << "Пятнадцатое ";
		break;
	case 16:
		cout << "Шестнадцатое ";
		break;
	case 17:
		cout << "Семнадцатое ";
		break;
	case 18:
		cout << "Восемнадцатое ";
		break;
	case 19:
		cout << "Девятнадцатое ";
		break;
	}

	switch (m)
	{
	case 1:
		cout << "января";
		break;
	case 2:
		cout << "февраля";
		break;
	case 3:
		cout << "марта";
		break;
	case 4:
		cout << "апреля";
		break;
	case 5:
		cout << "мая";
		break;
	case 6:
		cout << "июня";
		break;
	case 7:
		cout << "июля";
		break;
	case 8:
		cout << "августа";
		break;
	case 9:
		cout << "сентября";
		break;
	case 10:
		cout << "октября";
		break;
	case 11:
		cout << "ноября";
		break;
	case 12:
		cout << "декабря";
		break;
	}
	return 0;
}