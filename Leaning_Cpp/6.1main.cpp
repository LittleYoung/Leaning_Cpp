#include<iostream>
#include<cctype>
using namespace std;

int main() 
{
	char ch{};
	cout << "Please Input: " << endl;

	while (ch != '@')
	{
		if (islower(ch))
		{
			ch = toupper(ch);
		}
		else if (isupper(ch))
		{
			ch = tolower(ch);
		}
		if (isdigit(ch) == false)
		{
			cout << ch;
		}
		cin.get(ch);
	}
	cout << endl;
	system("pause");
	return 0;
}