#include <iostream>
using namespace std;

void menu()
{
	cout << "enter 1 to calculate your age in days:\n";
	cout << "enter 2 to calculate your age in hours:\n";
	cout << "enter 3 to calculate your age in minutes:\n";
	cout << "enter 4 to calculate your age in seconds:\n";
}


int main()
{
	int age, x, choice;

	menu();
	cout << "enter your choice:\n";
	cin >> choice;
	switch (choice)
	{
	case 1:
		cout << " please enter your age\n";
		cin >> age;
		x = age * 365;
		cout << "you appproximatly passed\t " << x << "\tdays till now\n";
		break;

	case 2:
		cout << " please enter your age\n";
		cin >> age;
		x = age * 365 * 24;
		cout << "you appproximatly passed\t " << x << "\t hours till now\n";
		break;


	case 3:
		cout << " please enter your age\n";
		cin >> age;
		x = age * 365 * 24 * 60;
		cout << "you appproximatly passed\t " << x << "\tminutes till now\n";
		break;

	case 4:
		cout << " please enter your age\n";
		cin >> age;
		x = age * 365 * 24 * 60 * 60;
		cout << "you appproximatly passed\t " << x << "\tseconds till now\n";
		break;
	default:
		cout << "wrong choice ...plz enter again:\n";


	}

	system("pause");
	return 0;

}