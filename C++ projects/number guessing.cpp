#include <iostream>

using namespace std;
void guess(int g)
{
	int gues = rand() % g + 1;
	cout << "guess a number you think that computer choose:  \n";
	int num = 0;
	while (num != gues)
	{

		cin >> num;
		if (num > gues)
		{
			cout << " high!  please enter again... \n";

		}
		else if (num < gues)
		{
			cout << " low!  please enter again... \n";
		}
	}

	cout << "congrats you guess the number " << gues << " correctly\n";
}
void computer_guess(int g)
{
	int low = 1;
	int high = g;
	int gues;
	char num = ' ';

	while (num != 'c')
	{
		if (low != high)
		{
			gues = rand() % (high - low + 1) + low;
		}
		else {
			gues = low;
		}

		cout << "is " << gues << "  high (H) or  low(l) or correct (c)???  \n";
		cin >> num;
		if (num == 'h')
		{
			cout << "\n";
			high = gues - 1;

		}
		else if (num == 'l')
		{
			cout << "\n";
			low = gues + 1;
		}

	}
	cout << " the computer  guess your number " << gues << " correctly \n";
}

int main()
{
	int choice;
	int x = 1000;
	cout << "\t\t\they there... wellcome to (guess number) game....\n";
	Sleep(2000);
start:
	cout << "enter your choice which one you want to play! \n";
	Sleep(1000);
	cout << "1.user guess (you guess a number) \n";
	cout << "2.computer guess (computer guess your number\n";
	cin >> choice;
	if (choice == 1)
	{
		guess(x);
	}
	else if (choice == 2)
	{
		cout << "\t\t** ok now chosse a number in mind between 0 - 1000  and tell computer weather its correct or not \n";
		Sleep(3000);
		computer_guess(x);
	}
	else
	{
		cout << "oops you enter a wrong number try again:  \n";
		goto start;
	}

	system("Pause");
	return 0;

}
