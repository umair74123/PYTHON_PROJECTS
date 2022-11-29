#include <iostream>
using namespace std;

int square(int x, int y)
{
int	 z, temp;
	z = x;
		for (int i = 1; i <= y - 1; i++)
		{
			temp = x*z;
			x = temp;
		}
		return x;
	
		
}
int main()
{

	int a, b;
		cout << "enter an integer:\n";
		cin >> a;
		cout << "enter power:\n";
		cin >> b;
		cout << "the square of:  " << a << "  power " << b << "  is " << square(a,b) << endl;
	system("pause");

}
