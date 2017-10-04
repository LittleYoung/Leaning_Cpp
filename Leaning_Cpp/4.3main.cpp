#include<iostream>
#include<string>
#include<cstring>

using namespace std;

int main() 
{
	const int size = 20;
	char firstname[size], lastname[size];

	cout << "Enter your first name: ";
	cin.getline(firstname, size);

	cout << "Enter your last name:";
	cin.getline(lastname, size);

	cout << "Here is the information in a single string:" << strcat(strcat(lastname, ","), firstname) << endl;

	system("pause");
	return 0;
}