#include "10.3.h"

using namespace std;
int golf::setgolf(const char * name, int hc)
{
	golf m(name, hc);
	*this = m;
	if (fullname[0] == '\0') 
	{
		return 0;
	}
	else 
	{
		return 1;
	}
}

int golf::setgolf() const
{
	if (fullname[0] == '\0')
	{
		return 0;
	}
	else
	{
		return 1;
	}
}

void golf::sethandicap(const int hc)
{
	handicap = hc;
}

void golf::showgolf() const
{
	cout << "fullname: " << fullname << " , and handicap: " << handicap << endl;
}

int main()
{
	using namespace std;
	golf go[5];
	int i;
	for (i = 0; i < 5; i++)
	{
		char name[39];
		cout << "Please enter the grade: " << endl;
		cout << i + 1 << "# name£º";
		cin.get(name, 39);

		int lv;
		cout << "grade£º";
		cin >> lv;
		cin.sync();
		if (!go[i].setgolf(name, lv))break;
	}
	cout << endl << "show Data£º" << endl;
	for (int j = 0; go[j].setgolf(); j++)
	{
		cout << j + 1 << "#£º";
		go[j].showgolf();
	}
	go[0].sethandicap(2);
	go[0].showgolf();
	system("pause");
	return 0;
}