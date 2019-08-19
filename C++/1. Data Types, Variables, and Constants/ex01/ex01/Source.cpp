/*1. Объявить переменные с помощью которых 
можно будет посчитать общую сумму покупки нескольких товаров. 
Например плитки шоколада, кофе и пакеты молока.*/

#include <iostream>

using namespace std;

int	main()
{
	int a;
	int b;
	int c;

	float pa;
	float pb;
	float pc;
	float sum;

	cout << "Write count of products" << endl;
	cin >> a;
	cin >> b;
	cin >> c;
	cout << "Write price of products" << endl;
	cin >> pa;
	cin >> pb;
	cin >> pc;
	sum = a*pa + b*pb + c*pc;
	cout << "Sum of products is: " << a * pa << " + " << b * pb << " + " << c * pc << " = " << sum << endl << endl;
	system("pause");
	return (0);
}