#include "10.4.h"

using namespace SALES;
using namespace std;

SALES::Sales::Sales(const double arr[], int n)
{
	int i;
	for (i = 0; i < n && i < 4; i++) 
	{
		sales[i] = arr[i];
	}
	for (int j = i; j < 4; j++) 
	{
		sales[j] = 0;
	}
	double total = 0;
	for (int j = 0; j < i; j++)
	{
		total += sales[j];
	}
	average = total / i;

	max = min = sales[0];

	for (int j = 0; j < i; j++)
	{
		if (sales[j] > max)
		{
			max = sales[j];
		}
		if (sales[j] < min)
		{
			min = sales[j];
		}
	}
}

SALES::Sales::Sales(const Sales & x)
{
	*this = x;
}

SALES::Sales::~Sales()
{
}

void SALES::Sales::showSales() const
{
	for (int i = 0; i < 4 && sales[i] != 0; i++) 
	{
		cout << "s.sales[" << i << "] = " << sales[i] << endl;
	}
	cout << "average = " << average << endl;
	cout << "max = : " << max << endl;
	cout << "min = : " << min << endl;
}

int main() 
{
	double x[3]{ 2.2,3.5,6.1 };
	Sales one(x, 3);
	Sales two(one);

	one.showSales();
	cout << endl;
	two.showSales();
	cout << endl;
	system("pause");
	return 0;
}