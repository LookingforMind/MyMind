/*1. ������������ ������������  ���� ����� � ����������, ���� ������������ �� ����� 0. 
����� ����� ����, �������� �� ����� ���������� �����, ������� ���� �������, 
�� ����� ����� � ������� ��������������. ���������: ���������� �������� ����������-�������, 
������� ����� ������� ���������� ��������� �����, � ����������, ������� ����� ����������� ����� ����� �����.*/
#include <iostream>
using namespace std;

int main()
{
	int i = 0;
	float num = 1;
	float sum = 0;
	float aver = 0;

	setlocale(LC_ALL, "rus");
	while (num != 0)
	{
		cout << "������� �����. ���� ������ ���������, ������� 0." << endl;
		cin >> num;
		cout << "�� �����: " << num << endl;
		i++;
		sum = sum + num;
		aver = sum / i;
	}
	cout << "�� ����� ����� ��� ������� ���: " << i << "\n����� �������� �����: " 
		<< sum << "\n������� ��������������: " << aver << endl;
	system("pause");
	return (0);
}