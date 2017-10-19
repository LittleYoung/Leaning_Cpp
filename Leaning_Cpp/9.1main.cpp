#include<iostream>
#include"9.1golf.h"
using namespace std;

const int Size = 5;

int main() 
{
	golf your[Size];
	int i;
	for (i = 0; i < Size; i++)
	{
		if (0 == setgolf(your[i])) { break; }
	}
	for (int j = 0; j < i; j++)
	{
		showgolf(your[j]);
	}
	setgolf(your[0], "heyyroup", 15);
	showgolf(your[0]);
	handicap(your[0], 10);
	showgolf(your[0]);

	system("pause");
	return 0;
}