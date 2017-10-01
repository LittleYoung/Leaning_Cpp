#include <iostream>

using namespace std;

//1du=60fen
//1fen=60miao
int main() 
{
	double degrees, minutes, seconds;

	const int deToMi = 60;
	const int miToSe = 60;

	cout << "Enter a latitude in degrees,minutes, and seconds" << endl;
	cout << "First, enter the degrees: ";
	cin >> degrees;
	cout << "Next, enter the minutes of arc: ";
	cin >> minutes;
	cout << "Finally, enter the seconds of arc: ";
	cin >> seconds;

	double Totle = degrees + (minutes / 60) + (seconds / 60 / 60);

	cout << degrees << " degrees," << minutes 
		<< " minutes," << seconds << " seconds = " 
		<< Totle <<" degrees"<< endl;

	system("pause");
	return 0;
}