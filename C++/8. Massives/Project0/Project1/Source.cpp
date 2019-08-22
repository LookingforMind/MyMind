/*0. �������� ������������ ����� ��������: ����� � ����� ��� ��������. 
����� ������������� ����� �� ������ ������� ����� ����� � ����� �����. 
����� ������������ � �������� �������� 0 � ��������������� ������, ��� ����� �������� ������ ������. */
/*������ �� ��������, �������, ��� �� ���� ���*/
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	const int AMOUNT_FLOORS = 7; // �-�� ������
	const int AMOUNT_PARKINGS = 10; // �-�� ����������� ���� �� �����
	int floorsAndParkings[AMOUNT_FLOORS][AMOUNT_PARKINGS]; // ���������� ���������� �������

	// ���������� �������� � �����������
	cout << "~~������� ���� �������� (0 - ����� �������������)~~" << endl << endl;

	for (int f = 0; f < AMOUNT_FLOORS; f++) // ���������� ���������� �����
	{
		cout << f + 1 << "-� ����:  ";
		for (int p = 0; p < AMOUNT_PARKINGS; p++)
		{
			floorsAndParkings[f][p] = p + 1; // ��������� ��������
			cout << floorsAndParkings[f][p] << " | "; // ����� ��������
		}
		cout << endl << "---------------------------------------------------" << endl;
	}

	int floor = 0; // ����
	int parkingPlace = 0; // ����������� �����
	char exit = '1'; // ��� ������ �� do while

	cout << "����� ������������� �������, �������� ���� � �����.\n";

	do // ������� do while
	{
		do // ���������� do while ��� ������ �����
		{
			cout << "������� ����� �����: ";
			cin >> floor;

			if (floor < 1 || floor > 7) // ���� ������ ����� ���
			{
				cout << "������ ����� ���!  �������� ���� �� 1 �� 7!\n";
			}
		} 
		while (floor < 1 || floor > 7);
		
		do // ���������� do while ��� ������ �����
		{
			cout << "������� ����� ����� ��������: ";
			cin >> parkingPlace;

			if (parkingPlace < 1 || parkingPlace > 10)
			{
				cout << "������ ������ ���! �������� ����� �� 1 �� 10!\n";
			}
		} 
		while (parkingPlace < 1 || parkingPlace > 10);

		if (floorsAndParkings[floor - 1][parkingPlace - 1] != 0) // ���� ����� ��������
		{
			floorsAndParkings[floor - 1][parkingPlace - 1] = 0; //  ��������, ��� ���������������
			cout << "\n\n������������ ������ �������!\n";
			cout << "���� ����� ��������: " << floor << "-� ���� " << parkingPlace << "-� �����!\n\n";
			cout << "������������� ��� - ������� 1. ����� - 0: ";
			cin >> exit;
		}
		else // ���� ����� ������ (������ �������� 0)
		{
			cout << "\n����� ������! �������� ������!\n";

			// ���������� �������, ����� ���� ����� ����� ����� ��������
			cout << "~~������� ���� �������� (0 - ����� �������������)~~" << endl << endl;

			for (int f = 0; f < AMOUNT_FLOORS; f++)
			{
				cout << f + 1 << "-� ����:  ";
				for (int p = 0; p < AMOUNT_PARKINGS; p++)
				{
					cout << floorsAndParkings[f][p] << " | ";
				}
				cout << endl << "---------------------------------------------------" << endl;
			}
		}
	} 
	while (exit != '0'); 	
	system("pause");
	return 0;
}