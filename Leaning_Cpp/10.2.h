#pragma once
#include <iostream>
#include <string>

class Person 
{
public:
	Person() { lname = ""; fname[0] = '\0'; }
	Person(const std::string &ln, const char *fn = "Heyyou");
	~Person();

	void show() const;			//firstname lasename format
	void FormalShow() const;	//lastname,firstname format
private:
	static const int LIMIT = 25;
	std::string lname;			//Person's last name
	char fname[LIMIT];			//Person's first name
};