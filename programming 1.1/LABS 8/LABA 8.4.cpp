// LABA 8.4.cpp 

#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	int x1, y1;
	cout << "Введите координаты точки" << endl;
	cin >> x1 >> y1;
	if (x1 != 0 and y1 != 0) {
		if (x1 > 0 and y1 > 0)
			cout << "I координатная четверть";
		else if (x1 > 0 and y1 < 0)
			cout << "II координатная четверть";
		else if (x1 < 0 and y1 < 0)
			cout << "III координатная четверть";
		else 
			cout << "IV координатная четверть";
	}
	else
		cout << "Точка не лежит на осях ОХ и ОУ";
}