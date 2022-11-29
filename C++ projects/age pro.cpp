#include <iostream>
using namespace std;
int main()
{
	string a;
	int b,age;
	a ="umair";
	b = 19;
	cout << "my age after 12 year is"\n  << b + 12 << "\n";
	cout << "my age before 5 year was\n" << b-5<<"\n";
	if (b >= 18){
		cout<<("eligible");
	}
	else{
		cout<<("not eligible");

	}

	system("pause");
	return 0;
}