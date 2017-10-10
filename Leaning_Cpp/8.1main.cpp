#include <iostream>

using namespace std;

void One(const char *a, int b = 0)
{
	if (b == 0)
	{
		cout << "Call function once. " << endl;
	}
	for (int i = 0; i < b; i++)
	{
		cout << "Call One(): " << i + 1 << endl;
	}
}

int main()
{
	int i;
	const char * ch = "Test";
	One(ch);
	cout << "Enter the number of calls to the function: " << endl;
	cin >> i;
	One(ch, i);
	system("pause");
	return 0;
}