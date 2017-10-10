#include<iostream>
using namespace std;

const double m5000 = 0;
const double m5000To15000 = 0.10;
const double m15000To35000 = 0.15;
const double m35000 = 0.20;

double convert(int income)
{
	double cost = 0;
	if (income > 35000)
	{
		cost=(income - 35000)*m35000 + convert(35000);
	}
	else if (income > 15000)
	{
		cost=(income - 15000)*m15000To35000 + convert(15000);
	}
	else if (income > 5000)
	{
		cost=(income - 5000)*m5000To15000 + convert(5000);
	}
	else if (income <= 5000)
	{
		cost = 0.0;
	}
	return cost;
}

int main()
{
	int income{};
	cout << "Please input your income?" << endl;
	while (cin >> income)
	{
		cout << convert(income) << endl;
		cin.get();
	}
	system("pause");
	return 0;
}