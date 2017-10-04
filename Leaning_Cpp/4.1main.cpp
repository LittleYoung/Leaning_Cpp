#include <iostream>
#include <string>
using namespace std;

int main() 
{
	const int size = 20;
	char firstName[size],lastName[size];
	int age;
	char grade;
	cout << "What is your first name? ";
	cin.get(firstName, size).get();

	cout << "What is your last name? ";
	cin.get(lastName, size).get();

	cout << "What letter grade do you deserve? ";
	cin >> grade;
	
	cout << "What is your age? ";
	cin >> age;

	cout << endl;

	cout << "Name: " << lastName << ", " << firstName << endl;

	cout << "Grade: " << ++grade << endl;
	cout << "Age: " << age << endl;


	system("pause");
	return 0;
}