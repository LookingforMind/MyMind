#include <iostream>
using namespace std;
/*2. Объявить три переменные типа int и присвоить первой числовое значение, 
вторая переменная равна первой переменной увеличенной на 3, 
а третья переменная равна сумме первых двух.*/

int main()
{
	int a;
	int b;
	int c;

	a = 3;
	b = a + 3;
	c = a + b;
	cout << c << endl;
	getchar();
	return (0);
}