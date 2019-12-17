// UMNOZHENIE MATRICI NA SKALYAR.cpp 

#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	int i, j, k;
	int A[100][100];
	cout << "Введите количество строк: " << endl;
	cin >> j;
	cout << "Введите количество столбцов: (столбцы не равны строкам) " << endl;
	cin >> i;
	cout << "Введите скаляр" << endl;
	cin >> k;
	cout << "Изначальная матрица: " << endl;
	for (int y = 0; y < j; y++) {
		for (int x = 0; x < i; x++) {
			cin >> A[x][y];
		}
	}
	cout << "Умноженная на скаляр матрица: " << endl;
	for (int y = 0; y < j; y++) {
		for (int x = 0; x < i; x++) {
			cout << A[x][y] * k << " ";
		}
		cout << endl;
	}
	return 0;
}
