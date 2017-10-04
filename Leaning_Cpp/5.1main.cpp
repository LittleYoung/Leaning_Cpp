#include<iostream>
#include<string>
using namespace std;
int main() 
{
	int one, two, sum = 0;
	cout << "Please Enter Two numbers: " << endl;

	cin >> one >> two;

	for (int i = one; i <= two; i++)
	{
		sum += i;
	}
	cout << "The integers and sums between these two numbers are: " << sum << endl;

	system("pause");
	return 0;
}