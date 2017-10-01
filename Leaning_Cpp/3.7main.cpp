#include <iostream>

using namespace std;

int main()
{
	double liChenShu, haoYouLiang;

	const double yinLiToKm= 62.14 / 100;
	const double jiaLunToL = 3.875;

	cout << "Please Input liChenShu:";//(yinli)
	cin >> liChenShu;

	cout << "Please Input haoYouLiang:";//(jialun)
	cin >> haoYouLiang;

	double km = liChenShu / yinLiToKm;
	double l = haoYouLiang*jiaLunToL;


	cout << km / l << endl;
	system("pause");
	return 0;
}