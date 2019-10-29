// LABA 12.3.cpp 
// Описать функцию RingS(R1, R2) вещественного типа, находящую площадь кольца,
// заключенного между двумя окружностями с общим центром и радиусами R1 и R2 
// (R1 и R2 — вещественные, R1 > R2). С ее помощью найти площади трех колец, 
// для которых даны внешние и внутренние радиусы.

#include <iostream>
using namespace std;

float RingS(float R1, float R2) {
	float S1, S2, S3;
	const float pi = 3.14;
	S1 = R1 * R1 * pi;
	S2 = R2 * R2 * pi;
	S3 = S1 - S2;
	return S3;
}

int main()
{
	setlocale(0, "");
	float R1, R2;
	for (int i = 0; i < 3; i++) {
		cout << "Введите первый и второй радиус (R1 > R2): " << endl;
		cin >> R1 >> R2;
		cout << RingS(R1, R2) << endl;
	}
}

