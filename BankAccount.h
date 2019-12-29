#ifndef BANKACCOUNT_H		// Header file parameters
#define BANKACCOUNT_H
#include <iostream>
#include <string>
using namespace std;
class BankAccount
{
	protected:	// member variables
		string name;
		double balance;
	public:
		BankAccount(string AccountHolder, double AccountBalance)	
		{
			name = AccountHolder;
			balance = AccountBalance;
		}
		virtual int withdraw(double amount)	// polymorphism
		{
			if (amount <= balance)
			{
				balance = balance - amount;
				return 1;
			}
			else
				return 0;
		}
		void deposit(double amount)	//deposit function
		{
			balance = balance + amount;
		}
		string getHolderName()	// returns the name of the account holder
		{
			return name;
		}
		double getBalance()	// returns the account balance
		{
			return balance;
		}
};

#endif		// Header file end
