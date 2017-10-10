#include<iostream>
#include<string>
using namespace std;

struct Contribution
{
	string name;
	double number;
};

int main()
{
	int num;
	bool isNo{false};
	cout << "Please enter the number of Pat: ";
	cin >> num;
	Contribution *con = new Contribution[num];
	for (int i = 0; i < num; i++)
	{
		cout << "# " << i + 1 << " name: ";
		cin >> con[i].name;
		cout << "# " << i + 1 << " money: ";
		cin >> con[i].number;
		cin.get();
	}
	cout << "Patrons: " << endl;
	for (int i = 0; i < num; i++)
	{
		if (con[i].number > 10000)
		{
			cout << con[i].name << endl;
			isNo = true;
		}
	}
	if (!isNo)
	{
		cout << "none" << endl;
	}
	delete[]con;
	system("pause");
	return 0;
}