#include <iostream>
#include <string>

using namespace std;

template<class T>
T maxn(T arr[], int n)
{
	T max = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] > max) 
		{
			max = arr[i];
		}
	}
	return max;
}

char * maxn(char *arr[], int n)
{
	char * max = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (strlen(arr[i])>strlen(max))
		{
			max = arr[i];
		}
	}
	return max;
}

int main()
{
	int Max_int[6]{ 4,2,1,9,5,6 };
	double Max_Double[4]{ 2.2,1.1,6.6,5.5 };
	char * Max_Char[5]{ "liyang","time","abc","englishchinese","ab" };

	cout << "Max_int: " << maxn(Max_int, 6) << endl;
	cout << "Max_Double: " << maxn(Max_Double, 4) << endl;
	cout << "Max_Char: " << maxn(Max_Char, 5) << endl;
	system("pause");
	return 0;
}