#include <iostream>
using namespace std;

int main() 
{
	int age;
	cout << "Please Enter your age?" << endl;
	cin >> age;

	int month = 12;

	cout << "You have " << age*month << " months" << endl;

	system("pause");
	return 0;
}