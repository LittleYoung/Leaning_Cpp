#include<iostream>
#include<array>
using namespace std;
int main()
{
	const int ArSize = 101;
	array <long double, ArSize> factorials;
	factorials[1] = factorials[0] = 1;

	for (int i = 2; i < ArSize; i++) 
	{
		//eg: A[2]=2*A[1]  A[3]=3*A[2]
		factorials[i] = factorials[i - 1] * i;
	}

	for (int i = 0; i < ArSize; i++)
	{
		cout << i << "!= " << factorials[i] << endl;
	}
	system("pause");
	return 0;
}