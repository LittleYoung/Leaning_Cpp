#pragma once
#include<iostream>

const int MAX = 20;

class Plorg
{
public:
	Plorg();
	~Plorg();

	void setCI(int ci);
	void showPlorg();

private:
	char name[MAX];
	int CI;
};