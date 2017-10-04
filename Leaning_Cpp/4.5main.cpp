#include<iostream>
#include<string>
using namespace std;

struct CandyBar
{
	string	brand;
	double	weight;
	int		cariello;
};

int main() 
{
	CandyBar snack
	{
		"Mocha Munch",2.3,350
	};


	cout << "brand: " << snack.brand << endl;
	cout << "weight: " << snack.weight << endl;
	cout << "cariello: " << snack.cariello << endl;
	system("pause");
	return 0;
}