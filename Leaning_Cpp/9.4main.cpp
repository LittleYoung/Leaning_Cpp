#include <iostream>
#include "9.4Question.h"
using namespace std;
using namespace SALES;

int main() 
{
	Sales name[2];
	double setdouble[3] = { 2.6,1.9,5.6 };
	setSales(name[0], setdouble, 3);
	setSales(name[1]);

	for (int i = 0; i < 2; i++) 
	{
		showSales(name[i]);
	}

	system("pause");
	return 0;
}