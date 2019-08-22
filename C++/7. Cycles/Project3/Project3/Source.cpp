/*3. «адача посложней. Ќарисовать равнобедренный треугольник из символов ^. 
¬ысоту выбирает пользователь. Ќапример: высота = 5,*/

/*#include <iostream>
using namespace std;

int main()
{
	int high = 0;
	int i = 0;
	int j = 1;

	setlocale(LC_ALL, "rus");
	cout << "¬ведите высоту треугольника\n";
	cin >> high;*/
#include <iostream>
	using namespace std;
	int main()
	{
		setlocale(LC_ALL, "rus");/*
		int i; // высота
		int probel; // количество пробелов
		int trel = 1; // количество треугольников
		int a = 1; // посколько trel посто€но обнул€етс€, кол Ц во треугольников определел€ет эта перемена€
		cout << "введите высоту пирамиды\n";
		cin >> i;
		while (i) 
		{
			probel = i - 1; // кол-во пробелов i-1 (высота = 5) кол-во пробелов на верхнем этаже = 4 и.т можете сами убедитс€ что это работает
			while (probel) 
			{
				cout << " "; // выводит пробелы
				probel--;
			}

			while (trel) 
			{
				cout << "^"; // после пробелов пишем треугольники
				trel--;
			}
			a += 2; // закономерность треугольников Ц 1, 3, 5, 7.. то есть увеличиваетс€ на 2
			trel = a; // следуешее кол-во треугольничков
			cout << "\n"; // переходим на новую строку (этаж пирамиды);
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