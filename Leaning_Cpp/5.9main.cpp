#include<iostream>
#include<string>
using namespace std;

int main()
{
	string word;
	int sum = 0;
	cout << "Enter words (to stop, type the word done):" << endl;
	cin >> word;

	while (word != "done")
	{
		cin >> word;
		sum++;
	}

	cout << "You enter a total of " << sum << " words" << endl;

	system("pause");
	return 0;
}