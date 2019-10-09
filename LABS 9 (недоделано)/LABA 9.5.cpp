// LABA 9.5.cpp 
// В восточном календаре принят 60-летний цикл, состоящий из 12- летних
// подциклов, обозначаемых названиями цвета: зеленый, красный, желтый, 
// белый и черный. В каждом подцикле годы носят названия животных:
// крысы, коровы, тигра, зайца, дракона, змеи, лошади, овцы, обезьяны,
// курицы, собаки и свиньи. По номеру года определить его название, 
//	если 1984 год — начало цикла: «год зеленой крысы».

#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	int N, a, b;
	cout << "Введите год: ";
	cin >> N;
	a = (N % 60 - 1) / 12;
	b = N % 60 % 12;
	cout << a << endl << b << endl;
	cout << "Год ";
	if (b != 2 and b != 3 and b != 4) {
		switch (a) {
		case 0:
			cout << "зеленой ";
			break;
		case 1:
			cout << "красной ";
			break;
		case 2:
			cout << "желтой ";
			break;
		case 3:
			cout << "белой ";
			break;
		case 4:
			cout << "черной ";
			break;
		}
	}
	if (b == 2 or b == 3 or b == 4) {
		switch (a) {
		case 0:
			cout << "зеленого ";
			break;
		case 1:
			cout << "красного ";
			break;
		case 2:
			cout << "желтого ";
			break;
		case 3:
			cout << "белого ";
			break;
		case 4:
			cout << "черного ";
			break;
		}
	}
	switch (b) {
	case 0:
		cout << "свиньи";
		break;
	case 1:
		cout << "крысы";
		break;
	case 2:
		cout << "коровы";
		break;
	case 3:
		cout << "тигра";
		break;
	case 4:
		cout << "зайца";
		break;
	case 5:
		cout << "дракона";
		break;
	case 6:
		cout << "змеи";
		break;
	case 7:
		cout << "лошади";
		break;
	case 8:
		cout << "овцы";
		break;
	case 9:
		cout << "обезьяны";
		break;
	case 10:
		cout << "курицы";
		break;
	case 11:
		cout << "собаки";
		break;
	}
	return 0;
}

