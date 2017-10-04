#include<iostream>
#include<string>
using namespace std;
int main()
{
	int number[3][12], sum = 0;
	string month[12]{ "1","2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12" };

	for (int i = 1; i <= 3; i++) 
	{
		for (int j = 0; j < 12; j++)
		{

			cout << "Please enter sales for the " << i << " year of " << month[j] << " month" << endl;
			cin >> number[i][j];
		}
	}
	cout << endl;

	for (int i = 1; i <= 3; i++)
	{
		for (int j = 0; j < 12; j++) 
		{
			sum += number[i][j];
		}
		cout<< i << " year sales: " << sum << endl;
	}
	cout << "Total sales are: " << sum << endl;
	system("pause");
	return 0;
}