#include <iostream>
using namespace std;

struct stringy
{
	char	*str;
	int		ct;
};

void set(stringy &str,char ch[])
{
	int size = strlen(ch);
	str.str = new char[size + 1];
	strcpy(str.str, ch);
	str.ct = size;
}

void show(const stringy &str, int n = 0)
{
	if (n != 0)
	{
		for (int i = 0; i < n; i++)
		{
			cout << "str= " << str.str << endl;
		}
	}
	else
	{
		cout << "str= " << str.str << endl;
	}
}

void show(const char ch[], int n = 0)
{
	if (n == 0)
	{
		cout << "str= " << ch << endl;
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			cout << "number: " << n << endl;
			cout << "str= " << ch << endl;
		}
	}
}

int main() 
{
	stringy beany;
	char testing[] = "Reality isn't what it used to be.";
	set(beany, testing);

	show(beany);
	show(beany, 2);

	testing[0] = 'D';
	testing[1] = 'u';

	show(testing);

	show(testing, 3);

	show("Done!");
	system("pause");
	return 0;
}