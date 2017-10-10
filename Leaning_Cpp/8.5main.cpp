#include <iostream>
#include <string>

using namespace std;

template<class T>
T Max(T arr[]) 
{
	T max = arr[0];
	for (int i = 1; i < 5; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	return max;
}

int main()
{
	double arr_double[]{ 2.5,2.9,1.2,1.1,0.5 };
	int arr_int[]{ 2,5,3,1,4 };
	cout << "Max To Double: " << Max(arr_double) << endl;
	cout << "Max To Int: " << Max(arr_int) << endl;
	system("pause");
	return 0;
}