#include <iostream>
using namespace std;
int main()
{
	int array1[2][2], array2[2][2], array3[2][2], arraysum[2][2];
	int i, j;
	
	cout << "enter element of 1st matrix\n";
	for (i = 0; i < 2; i++)
	{
		for ( j = 0; j < 2; j++)
		{
			cin >> array1[i][j];
		}
	}

	cout << "enter element of 2st matrix\n";
	for ( i = 0; i < 2; i++)
	{
		for ( j = 0; j < 2; j++)
		{
			cin >> array2[i][j];
		}
	}

	cout << "enter element of 3rd matrix\n";
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			cin >> array3[i][j];
		}
	}
	//processing
	for ( i = 0; i < 2; i++)

	{
		for ( j = 0; j < 2; j++)
		{
			arraysum[i][j] = array1[i][j] + array2[i][j] + array3[i][j];
		}
	}


	cout << "the sum of all matrix is  \n";
	for (i = 0; i < 2; i++)

	{
		for (j = 0; j < 2; j++)
		{
			cout << arraysum[i][j]<<"  ";
		}
		cout << endl;
	}
		
	system("pause");
}