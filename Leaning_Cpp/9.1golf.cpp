#include <iostream>
#include "9.1golf.h"
#include <cstring>
using namespace std;

void setgolf(golf & g, const char * name, int hc) 
{
	strcpy_s(g.fullname, name);
	g.handicap = hc;
}

int setgolf(golf & g) 
{
	cout << "Please Enter Your fullname: " << endl;
	//cin >> g.fullname;
	cin.getline(g.fullname, Len);
	if (g.fullname[0])	return 0;
	cout << "Please Enter Your handicap: " << endl;
	while (!(cin >> g.handicap))
	{
		cin.clear();
		cout << "Please Enter an Integer: " << endl;
	}
	return 1;
}

void handicap(golf & g, int hc) 
{
	g.handicap = hc;
}

void showgolf(const golf & g) 
{
	cout << "Your are name is: " << g.fullname << endl;
	cout << "Your are handicap is: " << g.handicap << endl;
}