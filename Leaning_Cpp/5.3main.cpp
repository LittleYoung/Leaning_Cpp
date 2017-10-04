#include<iostream>
#include<array>
using namespace std;
int main()
{
	int number, sum = 0;
	cout << "Please Input Number: " << endl;
	cin >> number;

	while (number != 0)
	{
		sum += number;
		cout << "Sum: " << sum << endl;
		cin >> number;
	}
	cout << "End..." << endl;
	system("pause");
	return 0;
}