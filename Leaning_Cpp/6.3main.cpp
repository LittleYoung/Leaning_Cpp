#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout << "Please enter one of the following chices:" << endl;
	cout << "c) carnivore	";
	cout << "p) pianist " << endl;;
	cout << "t) tree		";
	cout << "g) game " << endl;;
	cin >> ch;

	do
	{
		cout << "Please enter a c,p,t or g:";
		cin.ignore();
	} while (cin.get() && ch != 'c' && ch != 'p' && ch != 't' && ch != 'g');

	switch (ch)
	{
	case 'c': 
		cout << "carnivore" << endl;
		break;
	case 'p': 
		cout << "pianist" << endl;
		break;
	case 't': 
		cout << "tree" << endl;
		break;
	case 'g': 
		cout << "game" << endl;
		break;
	}
	system("pause");
	return 0;
}