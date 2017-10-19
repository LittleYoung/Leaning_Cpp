#pragma once
#include <iostream>

class Bank
{
public:
	Bank(const char* bankName, char* bankAccounts, double bankDeposit = 0);
	~Bank();

	void Show();
	double Deposit(double num);
	double Extraction(double num);

private:
	char	name[30];
	char	accounts[30];
	double	deposit;
};