#include <iostream>
using namespace std;

int main()
{
	int answer = 0;
	cout << "Put num of day's week (1-7)\n";
	cin >> answer;
	if (answer >= 1 && answer <= 7)
	{
		switch (answer)
		{
		case 1:
			cout << "first\n";
			break;
		case 2:
			cout << "second\n";
			break;
		case 3:
			cout << "third\n";
			break;
		case 4:
			cout << "four\n";
			break;
		case 5:
			cout << "five\n";
			break;
		case 6:
			cout << "six\n";
			break;
		case 7:
			cout << "seven\n";
			break;
		default:
			cout << "You put nonexistent number\n";
		}
	}
	system("pause");
	return (0);
}