#include<iostream>
#include<string>
using namespace std;

struct CamdyBar
{
	string	brand;
	double	weight;
	int		cariello;
};

int main() 
{
	CamdyBar bar = { "A",10.6,20 };

	cout << "brand: " << bar.brand << endl;
	cout << "weight: " << bar.weight << endl;
	cout << "cariello: " << bar.cariello << endl;

	system("pause");
	return 0;
}