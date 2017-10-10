#include<iostream>
using namespace std;

const int n1 = 5;
const int num1 = 47;
const int n2 = 1;
const int num2 = 27;

long double odds(unsigned num, unsigned n)
{
	long double res{ 1 };
	for (num, n; n > 0; n--, num--) 
	{
		res = res * n / num;
	}
	return res;
}

int main()
{
	cout << "probability is : " << odds(num1, n1) * odds(num2, n2) << endl;
	system("pause");
	return 0;
}