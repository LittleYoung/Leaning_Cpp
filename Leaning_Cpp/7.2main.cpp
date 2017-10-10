#include<iostream>
using namespace std;
const int score = 10;

//input
int input(double array[], int score)
{
	double temp;
	int i;
	for (i = 0; i < score; i++)
	{
		cout << "Enter value #" << (i + 1) << ": ";
		cin >> temp;
		if (!cin)
		{
			cin.clear();
			while (cin.get() != '\n');
			continue;
			cout << "Bad input:\n";
			break;
		}
		else if (temp < 0)
			break;
		array[i] = temp;
	}
	return i;
}

//display
double display(double array[], int size)
{
	double sum{};
	cout << "Sum score is: ";
	for (int i = 0; i < size; i++)
	{
		sum += array[i];
		cout << array[i] << " ";
	}
	return sum;
}

//avg
void average(double sum, int size)
{
	cout << "Average score is: " << sum / size << endl;
}

int main()
{
	double array[score];
	int size = input(array, score);
	double sum = display(array, size);
	average(sum, size);
	system("pause");
	return 0;
}