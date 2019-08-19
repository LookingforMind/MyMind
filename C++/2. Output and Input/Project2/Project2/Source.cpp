/*2. Создайте 5 переменных типа char, 
предложите  пользователю ввести слово из пяти букв и покажите эти символы (слово) на экран. 
(Символы вводить латиницей, т.к. кирилица будет отображаться некорректно. 
Почему? Это мы рассмотрим в одном из наших следующих уроков)*/
#include <iostream>
using namespace std;

int main()
{
	char a;
	char b;
	char c;
	char d;
	char e;
	//char *sum;

	cout << "Put 5 character" << endl;
	cin >> a >> b >> c >> d >> e;
	//*sum = a + b + c + d + e;
	cout << a << b << c << d << e << endl;

	system("pause");
	return (0);
}