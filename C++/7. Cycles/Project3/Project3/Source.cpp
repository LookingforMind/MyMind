/*3. ������ ���������. ���������� �������������� ����������� �� �������� ^. 
������ �������� ������������. ��������: ������ = 5,*/

/*#include <iostream>
using namespace std;

int main()
{
	int high = 0;
	int i = 0;
	int j = 1;

	setlocale(LC_ALL, "rus");
	cout << "������� ������ ������������\n";
	cin >> high;*/
#include <iostream>
	using namespace std;
	int main()
	{
		setlocale(LC_ALL, "rus");/*
		int i; // ������
		int probel; // ���������� ��������
		int trel = 1; // ���������� �������������
		int a = 1; // ��������� trel �������� ����������, ��� � �� ������������� ������������ ��� ���������
		cout << "������� ������ ��������\n";
		cin >> i;
		while (i) 
		{
			probel = i - 1; // ���-�� �������� i-1 (������ = 5) ���-�� �������� �� ������� ����� = 4 �.� ������ ���� �������� ��� ��� ��������
			while (probel) 
			{
				cout << " "; // ������� �������
				probel--;
			}

			while (trel) 
			{
				cout << "^"; // ����� �������� ����� ������������
				trel--;
			}
			a += 2; // �������������� ������������� � 1, 3, 5, 7.. �� ���� ������������� �� 2
			trel = a; // ��������� ���-�� ��������������
			cout << "\n"; // ��������� �� ����� ������ (���� ��������);
			i--;
		}
		system("pause");
		return 0;
	}*/



	/*
	for (int i = 0; i < high; i++)
	{
		for (int j = 1; j < high - i; j++)
		{
			cout << ' ';
		}

		for (int j = high - 2 * i; j <= high; j++)
		{
			cout << '^';
		}
		cout << endl;
	}
	system("pause");
	return 0;
}

	
	/*while (i <= high)
	{
		if (i == 0)
		{
			cout << '^';
			i += 3;
			cout << endl;
		}
		if (i == 3)
		{
			length = i;
			while (length > 0)
			{
				cout << '^';
				length--;
			}
			i++;
			cout << endl;
		}
	/*	if (i % 2 == 0)
		{
			length = i + 1;
			while (length > 0)
			{
				cout << '^';
				length--;
			}
			i++;
		}
		cout << endl;
		else
		{
			length = i + 1;
			while (length > 0)
			{
				cout << '^';
				length--;
			}
			i++;
			cout << endl;
		}
	}
	cout << endl;
	system("pause");
	return (0);
}*/