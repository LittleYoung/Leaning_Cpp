#include<iostream>
#include<string>
using namespace std;

int main() 
{
	string firstname, lastname;

	cout << "Enter your first name: ";
	getline(cin, firstname);

	cout << "Enter your last name:";
	getline(cin, lastname);

	cout << "Here is the information in a single string:" << lastname + "," + firstname << endl;
	system("pause");
	return 0;
}