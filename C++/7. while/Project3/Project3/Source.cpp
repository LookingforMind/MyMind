/*3. Задача посложней. Нарисовать равнобедренный треугольник из символов ^. 
Высоту выбирает пользователь. Например: высота = 5,*/

#include <iostream>
using namespace std;

int main()
{
	int high = 0;
	int i = 0;
	int j = 1;

	setlocale(LC_ALL, "rus");
	cout << "Введите высоту треугольника\n";
	cin >> high;
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
	/*if (i = 0)
	{
		while (high > i)
		{
			if (j = 1)
			{
				while (high > j - 1)
				{
					cout << ' ';
					j++;
				}
			}
			i++;
		}
		if (j = high - 2 * i)
		{
			while (j <= high)
			{
				cout << '^';
				j++;
			}
		}
		cout << endl;
	}
	system ("pause");
	return(0);
}*/
	
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