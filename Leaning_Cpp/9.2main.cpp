#include <iostream>
#include<string>
using namespace std;

const int ArSize = 10;
void strcount(const string str)
{
	static int total = 0;
	int count = str.length();
	total += count;

	cout << count << " characters\n";
	cout << total << " characters total\n";
}

int main() 
{
	string input;
	char next;

	cout << " Enter a line: " << endl;
	getline(cin, input);
	
	while (input != "")
	{
		strcount(input);
		cout << "Enter next line (empty line to quit): " << endl;
		getline(cin, input);
	}
	cout << "Bye" << endl;

	system("pause");
	return 0;
}