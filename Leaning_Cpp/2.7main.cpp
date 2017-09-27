#include <iostream>
using namespace std;

void combination(int hours, int minutes)
{
	cout << "Time: " << hours << ":" << minutes << endl;
}

int main() 
{
	int hours, minutes;
	cout << "Enter the number of hours: " << endl;
	cin >> hours;
	cout << "Enter the number of minutes :" << endl;
	cin >> minutes;

	combination(hours, minutes);


	system("pause");
	return 0;
}