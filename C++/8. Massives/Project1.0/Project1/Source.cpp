/*1. �������� ��������� ������, ��������� ������ ������� � �������� �� �����. */

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
//			cout << j;	// ���� �������
//			cout << massive[string][column] << "   "; // ���� �������
			massive[i][j] = i + j; // ������ �������
			cout << massive[i][j] << "   "; // ������ �������
		}
		cout << endl;
	}
	cout << endl;
	system("pause");
	return (0);
}