/*1. �������� 4 ���������� � ������� ������ ������ � ���������� ������������ ������ � ��� ��������. 
����� �����, ���������� �� �� ������.*/

#include <iostream>
using namespace std;

int main()
{
	int integer;
	char character;
	float fl;
	double db;

	cout << "Please, enter integer number: " << endl;
	cin >> integer;
	cout << "Please, enter character: " << endl;
	cin >> character;
	cout << "Please, enter float number: " << endl;
	cin >> fl;
	cout << "Please, enter double number: " << endl;
	cin >> db;
	cout << "Great work! you put character: " << character << " and int, float, double numbers: " << integer << ',' << fl << ',' << db << endl;
	system("pause");
	return (0);
}