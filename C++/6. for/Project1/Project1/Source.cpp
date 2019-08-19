/*1. Написать программу, которая будет показывать на экран квадрат числа,  
введенного пользователем. Пользователь должен сам решать –  выйти из программы или продолжить ввод. 
(Подсказка – необходимо запустить бесконечный цикл, в котором предусмотреть его прерывание, 
при наступлении определённого условия).*/
#include <iostream>
using namespace std;

int main()
{
	int i;
	int square = 0;
	int num = 0;
	for (;;)
	{
		cout << "For begining operations put 0 and tap Enter\nIf you want finish operations put 1 and tap Enter\n";
		cin >> i;
		if (i == 0)
		{
			cout << "Put number\n";
			cin >> num;
			square = num * num;
			cout << "Now you can see square of this number:\n\n" << square << "\n\n";
			cout << "If you want finish operations put 1 and tap Enter\n";
		}
		else
			cout << "You broke the programm\n";
		if (i == 1)
			break;
	}
	system("pause");
	return (0);
}