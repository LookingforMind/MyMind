/*2. Необходимо суммировать все  нечётные целые числа в диапазоне, который введёт пользователь с клавиатуры.*/

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int sum = 0;
	int begin = 0;
	int end = 0;

	cout << "Введите начало и конец интервала цифр\n";
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
	cout << "Теперь вы можете увидеть сумму всех нечетных цифр в заданном интервале\n" << sum << endl;
	system("pause");
	return (0);
}