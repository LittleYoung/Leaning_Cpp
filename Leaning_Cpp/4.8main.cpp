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
	int num;
	cout << "How many pieces of pizza you want to be record?";
	cin >> num;
	cin.get();

	pizzaInfo *info = new pizzaInfo[num];

	for (int i = 0; i < num; i++)
	{
		cout << "Please input the pizza message of the " << i + 1 << "th record:" << endl;
		cout << "Name:";
		getline(cin, info[i].name);

		cout << "Diameter:";
		cin >> info[i].diameter;

		cout << "Weight:";
		cin >> info[i].weight;
		cout << endl;

		cin.get();

	}

	for (int i = 0; i < num; i++)
	{
		cout << "the information of the " << i + 1 << "record is:" << endl;
		cout << "Name:" << info[i].name << endl;
		cout << "Diameter:" << info[i].diameter << endl;
		cout << "Weight:" << info[i].weight << endl;
		cout << endl;
	}

	delete[] info;
	system("pause");
	return 0;
}