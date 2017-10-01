#include <iostream>

using namespace std;
int main() 
{
	long seconds;

	const int dayToHours = 24;
	const int hoursToMinutes = 60;
	const int minutesToSeconds = 60;

	cout << "Enter the number of seconds: ";
	cin >> seconds;

	int day = seconds / 60 / 60 / 24;
	int hours = seconds / 60 / 60 - day * 24;
	int minutes = seconds / 60 - day * 24 * 60 - hours * 60;
	int seconds1 = seconds - day * 24 * 60 * 60 - hours * 60 * 60 - minutes * 60;

	cout << seconds << " seconds = " << day << " days," << hours << " hours," << minutes << " minutes," << seconds1 << " seconds" << endl;

	system("pause");
	return 0;
}