#include <iostream>

using namespace std;
int main() 
{
	_Longlong worldPopulation, uSPopulation;
	cout << "Enter the world's population: ";
	cin >> worldPopulation;
	cout << "Enter the population the US:";
	cin >> uSPopulation;


	cout << "The population of the US is " << (double)(uSPopulation*100)/ worldPopulation << " % of the world population." << endl;
	system("pause");
	return 0;
}