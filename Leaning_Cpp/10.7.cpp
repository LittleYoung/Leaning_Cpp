#include "10.7.h"
using namespace std;
Plorg::Plorg():CI(50)
{
	strcpy_s(name, "Plorga");//default name is Plorga
}

Plorg::~Plorg()
{
}

void Plorg::setCI(int ci)
{
	CI = ci;
}

void Plorg::showPlorg()
{
	cout << "Plorg's Name: " << name << endl;
	cout << "Plorg's CI: " << CI << endl;
}

int main() 
{
	Plorg plorg;
	plorg.showPlorg();
	plorg.setCI(33);
	plorg.showPlorg();

	system("pause");
	return 0;
}