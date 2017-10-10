#include<iostream>
using namespace std;


double harmonic(double num1, double num2)
{
	return 2.0 * num1 * num2 / (num1 + num2);
}

int main() 
{
	double num1, num2;
	double har;
	cout << "Please enter two number: " << endl;

	while (cin >> num1>>num2 && num1 != 0 && num2 != 0)
	{
		har = harmonic(num1, num2);
		cout << "harmonic mean is: " << har << endl;
		cout << "Please enter two number: " << endl;
		continue;
	}
	system("pause");
	return 0;
}