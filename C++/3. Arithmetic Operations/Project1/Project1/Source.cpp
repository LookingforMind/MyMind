/*1. ���������������� ������:  
���� �������������� ����� (� ������� 5678), ������� �� ����� � �������� ������� ����� �� ������� ��� ����� �������. 
�� ���� �� ������ ������� �� ������ 8765. ���������: ����� ����� �� ����� ��������� �����, 
���� ���������  ������� �� ������ �� 10.*/

#include <iostream>
using namespace std;

int main()
{
	int str;
	int rts;
	int x;

	str = 5678;
	rts = 0;
	x = 0;
	while (x < 4)
	{
		rts = str % 10;
		str = str / 10;
		cout << rts;
		x++;
	}
	cout << endl;
	system("pause");
	return (0);
}