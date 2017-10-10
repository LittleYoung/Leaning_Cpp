#include<iostream>
using namespace std;

const int strSize = 20;

struct bop
{
	char	fullname[strSize];	//real name
	char	title[strSize];		//job title
	char	bopname[strSize];	//secret BOP name
	int		preference;			//0 = fullname,	1 = title,	2 = bopname
};

int main() 
{
	char ch;
	bop bp[3] = 
	{
		{ "Wimp Macho","Raki Rhodes","Celia Laiter", 0},
		{ "Wimp Pacho","B","bb", 1},
		{ "wangwu","C","cc", 2}
	};
	cout << "Benvolent Order of Programmers Report" << endl;
	cout << "a. display by name	b. display by title" << endl;
	cout << "c. display by bopname	d.display by preference" << endl;
	cout << "q. quit" << endl;
	cout << "Enter your choice: ";
	cin >> ch;

	while (ch != 'q')
	{
		switch (ch)
		{
		case 'a':
			for (int i = 0; i < 3; i++)
			{
				cout << bp[i].fullname << endl;
			}
			break;
		case 'b':
			for (int i = 0; i < 3; i++)
			{
				cout << bp[i].title << endl;
			}
			break;
		case 'c':
			for (int i = 0; i < 3; i++)
			{
				cout << bp[i].bopname << endl;
			}
			break;
		case 'd':
			for (int i = 0; i < 3; i++)
			{
				switch (bp[i].preference)
				{
				case 0:
					cout << bp[i].fullname << endl;
					break;
				case 1:
					cout << bp[i].title << endl;
					break;
				case 2:
					cout << bp[i].bopname << endl;
					break;
				default:
					break;
				}
			}
			break;
		default:
			break;
		}
		cout << "Next choice: ";
		cin.get();
	}
	cout << "Bay! ";
	system("pause");
	return 0;
}