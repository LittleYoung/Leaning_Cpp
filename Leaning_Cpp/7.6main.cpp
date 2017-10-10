#include<iostream>  
using namespace std;

int fill_array(double ar[], int limit)
{
	double temp;
	int i;
	for (i = 0; i<limit; i++)
	{
		cout << "Enter value #" << (i + 1) << " \n";
		cin >> temp;
		if (!cin)
		{
			cin.clear();
			cout << "bad input:\n";
			break;
		}
		else 
		{
			ar[i] = temp;
		}
	}
	return i;
}
void show_array(double ar[], int size)
{
	for (int i = 0; i < size; i++) 
	{
		cout << "ARR_RES" << (i + 1) << ": " << ar[i] << endl;
	}
}
void reverse_array(double ar[], int size)
{
	for (int i = 1, j = size - i - 1; i < j; i++, j--)
	{
		double temp = ar[i];
		ar[i] = ar[j];
		ar[j] = temp;
	}
}

int main()
{
	int n;
	cout << "Enter the number of elements of an array: ";
	cin >> n;
	double* ar = new double[n];

	int size = fill_array(ar, n);
	show_array(ar, size);
	reverse_array(ar, size);
	cout << "====Reversal results====\n";
	show_array(ar, size);

	system("pause");
	return 0;
}