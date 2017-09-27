#include <iostream>
using namespace std;

#define ASTRONOMICAL 63240

double convert(double lightYears) 
{
	return ASTRONOMICAL * lightYears;
}

int main()
{
	double lightYears,astronomical;
	cout << "Enter the number of light years: " << endl;
	cin >> lightYears;

	astronomical = convert(lightYears);

	cout << lightYears << " light years = " << astronomical << " astronomical units" << endl;

	system("pause");
	return 0;
}