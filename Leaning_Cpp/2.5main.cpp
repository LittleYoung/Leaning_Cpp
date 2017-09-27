#include <iostream>
using namespace std;

double temperature(double celsius)
{
	double fahrenheit;
	fahrenheit = 1.8*celsius + 32;
	return fahrenheit;
}

int main() 
{
	double celsius, fahrenheit;
	cout << "Please enter a Celsius Value: " << endl;
	cin >> celsius;
	fahrenheit = temperature(celsius);
	cout << celsius << " degress Celsius is " << fahrenheit << "degress Fahrenheit"<<endl;

	system("pause");
	return 0;
}