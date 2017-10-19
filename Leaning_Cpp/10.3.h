#pragma once
#include <iostream>

class golf 
{
public:
	golf(const char *ln = "\0", int x = 0) { strcpy_s(fullname, ln); handicap = x; }
	int setgolf(const char * name, int hc);
	int setgolf()const;
	void sethandicap(const int hc);
	void showgolf()const;

private:
	enum { len = 40 };
	char fullname[len];
	int handicap;
};