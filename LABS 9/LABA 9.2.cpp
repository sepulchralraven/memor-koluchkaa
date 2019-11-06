// LABA 9.2.cpp 
// Робот может перемещаться в четырех направлениях («С» — север, «З» — запад, «Ю» — юг, «В» — восток)
// и принимать три цифровые команды: 0 — продолжать движение, 1 — поворот налево, −1 — поворот направо.
// Дан символ C — исходное направление робота и целое
// число N — посланная ему команда. Вывести направление робота после 
// выполнения полученной команды

#include <iostream>
#include "windows.h" 
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int N;
	char Q;
	cout << "Введите изначальное направление: " << endl;
	cin >> Q;
	cout << "Введите цифровую команду: " << endl;
	cin >> N;
	cout << "Направление будет ";
	switch (N) {
	case 1: switch (Q) {
	case 'С': cout << "З"; break;
	case 'Ю': cout << "В"; break;
	case 'З': cout << "Ю"; break;
	case 'В': cout << "С"; break;
	} break;
	case -1: switch (Q) {
	case 'С': cout << "В"; break;
	case 'Ю': cout << "З"; break;
	case 'З': cout << "С"; break;
	case 'В': cout << "Ю"; break;
	} break;
	case 0: switch (Q) {
	case 'С': cout << "С"; break;
	case 'Ю': cout << "Ю"; break;
	case 'З': cout << "З"; break;
	case 'В': cout << "В"; break;
	} break;
	}
	return 0;
	
}