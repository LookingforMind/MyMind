/*4. Пользователь должен ввести 2 числа. 
Вам надо показать на экран произведение этих чисел, сумму и разницу.  
Покажите так же среднее арифметическое этих введенных чисел.*/
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