#include<iostream>
#include<string>
using namespace std;
int main()
{
	int number[12], sum = 0;
	string month[12]{ "1","2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12" };
	
	for (int i = 1; i <= 12; i++)
	{
		cout << "Please enter the " << i << " sales volume." << endl;
		cin >> number[i];
		sum += number[i];
	}
	cout << "Total sales are:" << sum << endl;
	cout << "-----------------------" << endl;
	for (int i = 1; i <= 12; i++)
	{
		cout << i <<" sales: " << number[i] << endl;
	}
	system("pause");
	return 0;
}