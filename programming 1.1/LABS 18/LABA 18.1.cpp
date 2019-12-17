// LABA 18.1.cpp 
// Дана квадратная матрица A порядка M (M — нечетное число). Начиная с элемента A1,1 
// и перемещаясь против часовой стрелки, вывести все ее элементы по спирали:
// первый столбец, последняя строка, последний столбец в обратном порядке, 
// первая строка в обратном порядке, оставшиеся элементы второго столбца и 
// т. д.; последним выводится центральный элемент матрицы.

# include <iostream>
#include <Windows.h>
#include <cmath>
using namespace std;
int main()
{
	int N, arr[10][10], j, i, l;
	cout << "Enter array's size: ";
	cin >> N;
	cout << "Enter the array: " << endl;
	for (j = 0; j < N; j++)
	{
		for (i = 0; i < N; i++) 
		{
			cin >> arr[i][j];
		}
	}
	l = N - 1;
	cout << "elements by the spire: ";
	for (j = 0; j < N / 2; j++)
	{
		for (i = j; i < l - j; i++) //down
		{
			cout << arr[j][i] << " ";
		}
		for (i = j; i < l - j; i++) //right
		{
			cout << arr[i][N - j - 1] << " ";
		}
		for (i = j; i < l - j; i++) //up
		{
			cout << arr[N - j - 1][N - i - 1] << " ";
		}
		for (i = j; i < l - j; i++) //left
		{
			cout << arr[N - i - 1][j] << " ";
		}
	}
	cout << arr[N / 2][N / 2];
	return 0;
}
