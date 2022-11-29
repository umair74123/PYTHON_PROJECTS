#include <iostream>
using namespace std;
int main()
{
	int s1, s2, s3;
	int avg;
	
	cout << "enter three number\n";
	cin >> s1 >> s2 >> s3;
	avg = (s1 + s2 + s3) / 3;
	cout << "your average is =" << avg << endl;
	if (avg >=40){
		cout << "congrats thats a high score\n";
	}
	else{
		cout << "noob player\n";
	}
	system("pause");
}