/*1. ќбъ€вить двумерный массив, заполнить целыми числами и показать на экран. */

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	const int string = 10;
	const int column = 10;
	int massive[string][column];
	for (int i = 0; i < column; i++)
	{
//		cout << i;
		for (int j = 1; j < string; j++)
		{
//			cout << j;	// один вариант
//			cout << massive[string][column] << "   "; // один вариант
			massive[i][j] = i + j; // другой вариант
			cout << massive[i][j] << "   "; // другой вариант
		}
		cout << endl;
	}
	cout << endl;
	system("pause");
	return (0);
}