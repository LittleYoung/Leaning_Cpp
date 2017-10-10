#include<iostream>
using namespace std;
int main() 
{
	const int size{ 10 };
	double arr[size]{}, average, sum{ 0 };
	int frequency{ 0 }, num{ 0 };
	
	cout << "Please Input 10 number: " << endl;
	for (int i = 0; i < size; i++)
	{
		cout << "#" << i + 1 << ": ";
		cin >> arr[i];
		if (cin.fail())
			break;
		else
		{
			sum += arr[i];
			frequency++;
		}
		cout << endl;
	}
	average = sum / frequency;
	cout << "average: " << average << endl;

	for (int i = 1; i <= size;i++)
	{
		if (arr[i]>average)
		{
			num++;
		}
	}
	cout << "Average value have " << num << endl;
	system("pause");
	return 0;
}