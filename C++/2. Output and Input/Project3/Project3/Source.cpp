/*3. ������� �� ����� ����� � ����� ����:

https://purecodecpp.com/wp-content/uploads/2014/05/vivod.jpg */

#include <iostream>
#include <string>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	//char *a;
	//char *b;
	//char *c;
	
	const char *a = "� ������ � ��������� �� ������� �� �������� ��,\n��� �������� ���, � ����� �� �������� ��, ��� ������� �?\n";
	const char *b = "� ��� �������� ���� � ���� �� �������. � �� ������:\n\"������ ���� �����\".��� �������: \"�����?\n";
	const char *c = "� ������ �����������\".� ������� ��������.\n\t\/\/�.�.\"� ��� ������� �������\"/\/";
	cout << a << b << c << endl;
	system("pause");
	return (0);
}
