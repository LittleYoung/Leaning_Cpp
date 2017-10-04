#include<iostream>
#include<string>
using namespace std;

struct pizzaInfo
{
	string name;
	double diameter;
	double weight;
};

int main() 
{
	string name;
	double diameter, weight;
	cout << "Please Input Pizza in name: ";
	cin >> name;
	cout << "Please Input Pizza in diameter: ";
	cin >> diameter;
	cout << "Please Input Pizza in weight: ";
	cin >> weight;

	pizzaInfo pizza{ name,diameter,weight };

	cout << "Pizza name is: " << name << endl;
	cout << "Pizza diameter is: " << diameter << endl;
	cout << "Pizza weight is: " << weight << endl;

	system("pause");
	return 0;
}