#include "10.1.h"

using namespace std;

Bank::Bank(const char * bankName, char * bankAccounts, double bankDeposit)
{
	strncpy_s(name, bankName, 29);
	strncpy_s(accounts, bankAccounts, 29);
	deposit = bankDeposit;
}

Bank::~Bank()
{
}

void Bank::Show()
{
	cout << "Name:" << name << endl;
	cout << "Accounts:" << accounts << endl;
	cout << "Deposit:" << deposit << endl;
}

double Bank::Deposit(double num)
{
	deposit += num;
	return deposit;
}

double Bank::Extraction(double num)
{
	if (deposit>num)
	{
		deposit -= num;
	}
	else
	{
		cout << "Amount exceeded" << endl;
	}
	return deposit;
}

int main() 
{
	double depositMoney, extractionMoney;
	Bank bank("Li", "123456789", 600);
	bank.Show();
	cout << "Please enter the amount deposited" << endl;
	cin >> depositMoney;
	cout << "There are still " << bank.Deposit(depositMoney) <<" yuan left" << endl;


	cout << "Please input the amount taken out" << endl;
	cin >> extractionMoney;
	cout << "That's " << bank.Extraction(extractionMoney) << " yuan in all" << endl;
	system("pause");
	return 0;
}