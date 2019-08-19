/*3. Вывести на экран текст в таком виде:

https://purecodecpp.com/wp-content/uploads/2014/05/vivod.jpg */

#include <iostream>
#include <string>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	//char *a;
	//char *b;
	//char *c;
	
	const char *a = "А почему в ресторане ей никогда не нравится то,\nчто заказала она, и всегд не нравится то, что заказал я?\n";
	const char *b = "И она начинает есть у меня из тарелки. Я ей говрою:\n\"Закажи тоже самое\".Она говорит: \"Зачем?\n";
	const char *c = "Я только попробывать\".И съедает половину.\n\t\/\/к.ф.\"О чем говорят мужчины\"/\/";
	cout << a << b << c << endl;
	system("pause");
	return (0);
}
