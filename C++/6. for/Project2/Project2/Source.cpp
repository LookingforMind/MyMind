/*2. � �������� ��������� �������� �����-�� ���������� �����������. 
���������� ���������� ������������ ������ ����� ������: 
������� ������� �������� �������� �� ����, ������ ������� ������� ���������� 
� � ����� �������� ������� ������ �������� � ������ �������� �� ���, 
� ��� �� ��������� ������� ������� �����������.*/
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	int numP = 0;
	int ageP = 0;
	int ageAll = 0;
	int ageSmall = 99999;
	int ageLarge = 0;
	int averageP = 0;
	int i;

		cout << "������� ���������� ����� ���������� ��������\n";
		cin >> numP;
		cout << "\n������ ������� ������� ������� ����������\n";

		for (i = 0; i < numP; i++)
		{	
			cin >> ageP;
			if (ageLarge < ageP)
				ageLarge = ageP;
			if (ageSmall > ageP)
				ageSmall = ageP;
			if (ageP >= 0)
				ageAll += ageP;
		}
		averageP = ageAll / numP;

	cout << "� ���� ���� �������� ��������: " << numP 
		<< ". �� ��� ������ ��������: " << ageLarge 
		<< ", � ������ ��������: " << ageSmall 
		<< ". ��� ���� ������� ������� ���������� �������� ����������: " << averageP 
		<< endl;
	system("pause");
	return (0);
}