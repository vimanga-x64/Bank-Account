#pragma once
#include "BankAccount.h"
class MoneyMarketACC :	public BankAccount	// Inheritance child class with parent class
{
private:
	int free_withdrawals;
public:
	MoneyMarketACC(string AccHolder, double AccBal) : BankAccount(AccHolder, AccBal)	// Inherting Maoney Market file and Bank Account file
	{
		free_withdrawals = 2;
	}
	int withdraw(double amount)		// withdraw function
	{
		if (free_withdrawals == 0)
		{
			amount = amount + 1.5;

		}
		if (amount <= balance)	
		{
			balance = balance - amount;
			if (free_withdrawals > 0)
			{
				free_withdrawals--;
			}
			return 1;
		}
		else return 0;
	}
};

