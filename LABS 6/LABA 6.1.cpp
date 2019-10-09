// LABA 6.1.cpp 
// С начала суток прошло N секунд (N — целое). 
// Найти количество секунд, прошедших с начала последней минуты

#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	int N, a;
	cout << "Введите количество секунд" << endl;
	cin >> N;
	while (N >= 60) {
		N = N - 60;
	}
	N = N % 60;
	cout << "С начала последней минуты прошло " << N << " секунд";
	return 0;
}

