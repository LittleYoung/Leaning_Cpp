#include <iostream>

using namespace std;

//1Ӣ��(ft)=12Ӣ��(in)
//1Ӣ��(in)=0.0254��(m)
//1ǧ��(kg)=2.2��(lb)
//BMI=Weigh/(Height^2)

int main()
{
	int heightFoot = {};		//Ӣ��
	int heightInch = {};		//Ӣ��
	double weighPound = {};		//��

	const int inToFt = 12;
	const double inToM = 0.0254;
	const double kgToLb = 2.2;

	cout << "Please Input Your Height(Foot)?" << endl;
	cin >> heightFoot;
	cout << "Please Input Your Height(inch)?" << endl;
	cin >> heightInch;
	cout << "Please Input Your Weigh(Pound)?" << endl;
	cin >> weighPound;

	double weigh = weighPound / kgToLb; //kg
	double height = (heightFoot * inToFt+ heightInch)* inToM;
	double bMI = weigh / (height *height);

	cout << "Your BMI is " << bMI << endl;

	system("pause");
	return 0;
}