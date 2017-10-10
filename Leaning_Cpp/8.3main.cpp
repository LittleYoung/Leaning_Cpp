#include <iostream>
#include <string>

using namespace std;

void One(string &a) 
{
	int i=0;
	while (a[i])
	{
		a[i] = toupper(a[i]);
		i++;
	}
}

int main()
{
	string str;
	cout << "Enter a string (q to quit): ";
	cin >> str;
	while (str!="q")
	{
		One(str);
		cout << str << endl;
		cout << "Next string (q to quit): ";
		getline(cin, str);
	}

	system("pause");
	return 0;
}