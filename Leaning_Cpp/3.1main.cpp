#include <iostream>

using namespace std;

//1Ӣ��(ft)=12Ӣ��(in)
int main()
{
	int heightInch = {};
	const int inToFt = 12;
	cout << "Please Input Your Height(inch)?" << endl;
	cin >> heightInch;

	cout << "You Height foot is " << (double)heightInch / inToFt << endl;

	system("pause");
	return 0;
}