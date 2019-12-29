#pragma once
#include "BankAccount.h"
class CDAccount : public BankAccount
{
private:
	float Interest_rate;	// member variables
public:
	CDAccount(string AccHolder, double AccBal, float ir) : BankAccount(AccHolder, AccBal)		// Inheritance
	{
		Interest_rate = ir;
	}
	int withdraw(double amount)		// withdraw function
	{
		double penalty = 0.25 * Interest_rate * balance;
		double totalAmount_due = amount + penalty;
		if (totalAmount_due <= balance)
		{
			balance = balance - totalAmount_due;
			return 1;
		}
		else
			return 0;	// if the above condition is not met then return 0
	}
};

