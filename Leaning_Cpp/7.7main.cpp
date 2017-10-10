#include <iostream>  

using namespace std;
const int max = 5;

int main()
{
	double m[max];
	cout << "The following is to fill the array with numbers: " << endl;
	double* x = fill_array(m, max);
	show(m, x); 
	if (x == (m - 1))
		cout << "You cannot convert because you have not entered a valid number." << endl;
	else
	{
		cout << "Please enter the number of times you want to change the array as a whole:" << endl;
		double size;
		cin >> size;
		if (!cin)
		{
			cout << "Input error, cannot change." << endl;
			cin.clear();
			cin.sync();
		}
		else if (size < 0)
			cout << "The input is negative and cannot be converted." << endl;
		else
			revalue(m, x, size);
	}
	system("pause");
	return 0;
}

double* fill_array(double*m, int max) 
{
	int i;
	for (i = 0; i < max; i++)
	{
		cout << i + 1 << "# : ";
		cin >> m[i];
		if (!cin)
		{
			cin.clear();
			cin.sync();
			cout << "Input error, end of input..." << endl;
			break;
		}
		else if (m[i]<0)
		{
			cout << "You entered a negative number, and the input ended..." << endl;
			break;
		}
	}
	double *a = &m[i - 1];
	return a;
}

void show(double*m, double*x) 
{
	cout << endl << "Here you will show the numbers you entered:" << endl;
	while (m != (x + 1))
	{
		int i = 0;
		cout << ++i << "# = " << *m << endl;
		m++;
	}
}

void revalue(double*m, double*x, double a)
{
	while (m != (x + 1))
	{
		int i = 0;
		cout << ++i << "# = " << (*m *= a) << endl;
		m++;
	}
}