#include<iostream>  
using namespace std;

double calculate(double x, double y, double(*pf)(double, double))
{
	return (*pf)(x, y);
}
double add(double x, double y)
{
	return x + y;
}
double sub(double x, double y)
{
	return x - y;
}
double mean(double x, double y)
{
	return (x + y) / 2.0;
}

int main()
{
	double(*pf[3])(double, double) = { add, sub, mean };
	const char(*p[3]) = { "sum", "difference", "mean" };
	double num1, num2;
	cout << "Enter pairs of numbers (q to quit):";
	while (cin >> num1 >> num2)
	{
		cout << calculate(num1, num2, add) << "= sum\n";
		cout << calculate(num1, num2, mean) << "= mean\n";
		for (int i = 0; i < 3; i++)
		{
			cout << calculate(num1, num2, pf[i]) << " = " << p[i] << "\n";
		}
	}
	system("pause");
	return 0;
}