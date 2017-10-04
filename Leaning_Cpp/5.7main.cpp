#include<iostream>
#include<string>
using namespace std;

struct Car
{
	string	producers;
	int		year;
};

int main()
{
	int carNum;
	cout << "How many cars do you wish to catalog? ";
	cin >> carNum;

	Car *car = new Car[carNum];

	for (int i = 0; i < carNum; i++)
	{
		cin.get();
		cout << "Car #" << i+1 << endl;
		cout << "Please enter the make: ";

		//getline(cin, car[i].producers);
		cin >> car[i].producers;

		cout << "Please enter the year make: ";
		cin >> car[i].year;
	}
	for (int i = 0; i < carNum; i++)
	{
		cout << car[i].year << "____" << car[i].producers << endl;
	}
	delete[] car;
	system("pause");
	return 0;
}