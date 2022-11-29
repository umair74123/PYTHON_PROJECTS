#include <iostream>
using namespace std;
int main()
{
	char employed, recgrades;
	cout << "answers the following questions\n" << "weither with y for yes and n for no\n";
	cout << "are  u employed\n";
	cin >> employed;
	cout << "have u graduated from clf from past two years??\n";
	cin >> recgrades;
	if (employed == 'y')
	{
		if (recgrades == 'y'){
			cout << "congrst";
		}
		else
		{
			cout << "soory";
		}
	}

	else{
		cout << "we are soory";
	}
		
	
	
	system("pause");
}