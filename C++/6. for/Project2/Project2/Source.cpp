/*2. В спортзал ежедневно приходит какое-то количество посетителей. 
Необходимо предложить пользователю ввести такие данные: 
сколько человек посетило спортзал за день, ввести возраст каждого посетителя 
и в итоге показать возраст самого старшего и самого молодого из них, 
а так же посчитать средний возраст посетителей.*/
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	int numP = 0;
	int ageP = 0;
	int ageAll = 0;
	int ageSmall = 99999;
	int ageLarge = 0;
	int averageP = 0;
	int i;

		cout << "Введите количество людей посетивших спортзал\n";
		cin >> numP;
		cout << "\nТеперь введите возраст каждого посетителя\n";

		for (i = 0; i < numP; i++)
		{	
			cin >> ageP;
			if (ageLarge < ageP)
				ageLarge = ageP;
			if (ageSmall > ageP)
				ageSmall = ageP;
			if (ageP >= 0)
				ageAll += ageP;
		}
		averageP = ageAll / numP;

	cout << "В этот день спортзал посетило: " << numP 
		<< ". Из них самому старшему: " << ageLarge 
		<< ", а самому младшему: " << ageSmall 
		<< ". При этом средний возраст посетивших спортзал состовляет: " << averageP 
		<< endl;
	system("pause");
	return (0);
}