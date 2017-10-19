#include "10.2.h"

using namespace std;
Person::Person(const std::string & ln, const char * fn)
{
	lname = ln;
	strncpy_s(fname, fn, 24);
}

Person::~Person()
{
}

void Person::show() const
{
	cout << "firstname,lastname format: " << endl;
	if (lname == "") 
	{
		cout << "name empty!" << endl;
		return;
	}
	cout << fname << " " << lname << endl;
}

void Person::FormalShow() const
{
	cout << "lastname,firstname format: " << endl;
	if (lname == "") 
	{
		cout << "name empty!" << endl;
		return;
	}
	cout << lname << " " << fname << endl;
}

int main() 
{
	Person one;
	Person two("Smythecraft");
	Person three("Dimwiddy", "Sam");
	one.show();
	one.FormalShow();
	cout << endl;


	two.show();
	two.FormalShow();
	cout << endl;

	three.show();
	three.FormalShow();
	cout << endl;
	system("pause");
	return 0;
}