/*4. ������������ ������ ������ 2 �����. 
��� ���� �������� �� ����� ������������ ���� �����, ����� � �������.  
�������� ��� �� ������� �������������� ���� ��������� �����.*/
#include <iostream>
using namespace std;

int main()
{
	int a;
	int b;

	cout << "Put two numbers" << endl;
	cin >> a >> b;
	int plus = a + b;
	int multiplication = a * b;
	int division = a / b;
	int minus = a - b;
	int average = (a + b) / 2;
	cout << "plus: " << plus << "  minus: " << minus << "  multiplication: " << multiplication << "  division: " << division << "  average: " << average << endl;
	system("pause");
	return (0);
}