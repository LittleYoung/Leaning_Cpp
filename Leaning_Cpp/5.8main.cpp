#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	const int size = 20;
	char word[size];
	int sum = 0;
	cout << "Enter words (to stop, type the word done):" << endl;
	cin >> word;

	while (strcmp(word, "done"))
	{
		cin >> word;
		sum++;
	}

	cout << "You enter a total of " << sum << " words" << endl;

	system("pause");
	return 0;
}