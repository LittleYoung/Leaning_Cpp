#include <iostream>  
using namespace std;
struct debts
{
	char name[50];
	double amount;
};

template <typename T>
T ShowArray(T arr[], int n)
{
	T total = 0;
	cout << "template A" << endl;
	for (int i = 0; i < n; i++) 
	{
		total += arr[i];
	}
	return total;
}

template <typename T>
T ShowArray(T * arr[], int n)
{
	T total = 0;
	cout << "template B" << endl;
	for (int i = 0; i < n; i++) 
	{
		total += *arr[i];
	}
	return total;
}

int main(void)
{
	int things[6] = { 13, 31, 103, 301, 310, 130 };
	struct debts mr_E[3] =
	{
		{ "Ima Wolfe",2400.0 },
		{ "Ura Foxe ",1300.0 },
		{ "Iby Stout",1800.0 }
	};
	double* pd[3];
	for (int i = 0; i < 3; i++) 
	{
		pd[i] = &mr_E[i].amount;
	}
	cout << "Listing Mr. E's counts of things:" << endl;;
	cout << ShowArray(things, 6) << endl;
	cout << "Listing Mr. E's debts: " << endl;
	cout << ShowArray(pd, 3) << endl;

	system("pause");
	return 0;
}