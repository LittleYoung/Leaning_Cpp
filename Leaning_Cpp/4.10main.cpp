#include<iostream>
#include<array>
using namespace std;
int main() 
{
	int num;
	cout << "How many times do you want to record?" << endl;
	cin >> num;

	double *time = new double[num];

	for (int i = 0; i < num; i++)
	{
		cout << i + 1 << " th input:" << endl;
		cin >> time[i];
	}

	double sum = 0;
	for (int i = 0; i < num; i++)
	{
		sum += time[i];
	}

	cout << "you have " << num << "records" << endl;
	cout << " your average score is " << sum / num << endl;

	system("pause");
	return 0;
}