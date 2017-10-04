#include<iostream>

using namespace std;
int main()
{
	const double dephne = 0.10;
	const double cleo = 0.05;

	double dephneSum = 100;
	double cleoSum = 100;

	int year = 0;

	while (dephneSum >= cleoSum)
	{
		dephneSum += 100 * dephne;	//dephne
		cleoSum += cleoSum*cleo;	//cleo
		year++;
	}
	cout << "Year: " << year<< endl;

	system("pause");
	return 0;
}