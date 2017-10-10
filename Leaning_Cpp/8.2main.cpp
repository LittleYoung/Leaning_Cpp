#include <iostream>
#define MAX 20
using namespace std;

struct CandyBar
{
	char	brand[MAX];
	double	weight;
	int		energy;
};

void One(CandyBar &cb, const char *br = "Millennium Munch", double we = 2.85, int en = 350)
{
	strcpy(cb.brand, br);
	cb.weight = we;
	cb.energy = en;
}

void Two(CandyBar &cb) 
{
	cout << "brand: " << cb.brand << endl;
	cout << "weight: " << cb.weight << endl;
	cout << "energy: " << cb.energy << endl;
}

int main()
{
	CandyBar candyBar;
	One(candyBar);
	Two(candyBar);

	system("pause");
	return 0;
}