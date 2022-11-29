#include <iostream>
#include<string>

using namespace std;

int main()
{
	string first_name, friend_name;
	char friend_gender;
	int age;
	cout << "Enter first name:";
	cin >> first_name;
	cout << "Dear" << first_name << ", ";
	cout << "How are you? I am fine\t. I miss you.\t How's the days going. What about your work. " << endl;
	cout << "Enter your friend name:";
	cin >> friend_name;
	cout << "Have you seen " << friend_name << " lately. ";
	cout << "Enter the friend gender(f for female,m for male):";
	cin >> friend_gender;
	if (friend_gender == 'm'){
		cout << "If you see " << friend_name << " please ask him to call me. ";
	}
	if (friend_gender == 'f'){
		cout << "If you see " << friend_name << " please ask her to call me. ";
	}
	cout << "Enter the age:";
	cin >> age;
	cout << "I hear you just had a birthday and you are " << age << " old." << endl;
	if (age <= 0){
		cout << "you're kidding!";
	}
	if (age <= 12){
		cout << "Next year you will be " << age + 1 << endl;
	}
	if (age == 17){
		cout << "Next year you will beable to vote.";
	}
	if (age >= 70){
		cout << "I hope your enjoying retirment.";
	}
	cout << "\n\nYours sincerely,";
	return 0;
}