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
	CamdyBar *bar = new CamdyBar[3]();
	bar->brand = "A";
	bar->weight = 10.6;
	bar->cariello = 20;

	cout << "brand: " << bar->brand << endl;
	cout << "weight: " << bar->weight << endl;
	cout << "cariello: " << bar->cariello << endl;

	delete[] bar;
	system("pause");
	return 0;
}