/*2. ���������� ����������� ���  �������� ����� ����� � ���������, ������� ����� ������������ � ����������.*/

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int sum = 0;
	int begin = 0;
	int end = 0;

	cout << "������� ������ � ����� ��������� ����\n";
	cin >> begin >> end;
	while (begin <= end)
	{
		if (begin % 2 != 0)
		{
			sum += begin;
			begin++;
		}
		else
			begin++;
	}
	cout << "������ �� ������ ������� ����� ���� �������� ���� � �������� ���������\n" << sum << endl;
	system("pause");
	return (0);
}