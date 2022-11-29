#include <iostream>
using namespace std;
int main()
{
	int marks;
	cout << "enter your marks percentage:\t";
	cin >> marks;
	if (marks >= 0 && marks <= 100)
	{
		if (marks >= 88){
			cout << " wow!\t your grade is A\n";
		}
		else if (marks >= 80 && marks < 88)
		{
			cout << "good!\tyour grade is A-\n";
		}
		else if (marks >= 75 && marks < 80)
		{
			cout << "your grade is B+\t not bad\n";
		}
		else if (marks >= 70 && marks <75)
		{
			cout << "your grade is B\n";
		}
		else if (marks >= 65 && marks < 70)
		{
			cout << "your grade is B-\n";
		}
		else if (marks >= 60 && marks < 65)
		{
			cout << "your grade is c \n";
		}
		else if (marks >= 55 && marks < 60)
		{
			cout << "your grade is c-\n";
		}
		else if (marks >= 50 && marks < 55)
		{
			cout << "your grade is d\n";
		}
		else if (marks < 50)
		{
			cout << "Opps!! you are fail\n";
		}

	}
	else

		cout << "you enter an wrong number...plz enter a number between {0-100}\n";
	system("pause");

	return 0;
}

