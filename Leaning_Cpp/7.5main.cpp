#include <iostream>

using namespace std;

long long numberFactorial(int num)
{
	int factorial = 1;
	if (num > 1) 
	{
		factorial = num * numberFactorial(num - 1);
	}
	else 
	{
		factorial = factorial * 1;
	}
	return factorial;
}

int main() 
{
	int num;
	cout << "Please Enter Number is: " << endl;
	cin >> num;
	cout << "The factorial of " << num << " is: " << numberFactorial(num) << endl;
	system("pause");
	return 0;
}