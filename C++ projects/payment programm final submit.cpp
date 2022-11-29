#include <iostream>
using namespace std;
int main()
{
	int salary, salary1, salary2;
	cout << "enter your salary:-\t";
	cin >> salary;

	if (salary <= 50000 && salary > 0){
		salary1 = salary*1.1;
		cout << "your new salary after increment is\n" << salary1 << endl;
	}
	else if (salary > 50000)
	{
		salary2 = salary*1.05;
		cout << "your new  salary after increment  is\n" << salary2 << endl;

	}
	else if (salary < 0){
		cout << "you enter wrong digit. plz enter correct one\n";
	}


	int performance;
	int bonus1, bonus2;
	cout << "plz enter your performance between (0-10):-\t" << endl;
	cin >> performance;
	if (performance <= 10 && performance > 5)
	{
		if (salary <= 50000){
			bonus1 = salary1*1.05;
			cout << "new salary after bonus:\n" << bonus1 << endl;
		}
		else if (salary > 50000){
			bonus2 = salary2*1.05;
			cout << "new salary after bonus:\n" << bonus2 << endl;
		}
	}
	else if (performance > 0 && performance <= 5)
	{
		if (salary <= 50000){
			bonus1 = salary1*1.025;
			cout << "new salary after bonus  :\n" << bonus1 << endl;
		}
		else {
			bonus1 = salary2*1.025;
			cout << "new salary after bonus :\n" << bonus1 << endl;


		}

	}
	else
		cout << "you enter wrong number . plz enter a number between (0-10)";



	system("pause");

}

