/*3. Объявить переменные, для подсчета общего количества предметов для сервировки стола. 
Например чашки, такое же количество блюдец и ложек.*/

#include <iostream>
using namespace std;

int main()
{
	int glases;
	int plates;
	int spoons;

	cout << "How many guests we will have?" << endl;
	cin >> glases;
	plates = glases;
	spoons = plates;
	cout << "Count of glasess is: " << glases << " so, we need " << plates << " plates and " << spoons << " spoons." << endl << endl;
	system("pause");
	return (0);
}