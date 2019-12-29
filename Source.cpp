// Vimanga V. Umange
// A538P992

#include <iostream>
using namespace std;
#include <string>
#include "BankAccount.h"	// Include header files so main function can excecute using function from those files
#include "CDAccount.h"
#include "MoneyMarketACC.h"

int main() {
	BankAccount NormalACC("Normal Account", 1000);	// Initialize bank class account with values

	MoneyMarketACC MMAcc("Money MArket Account", 1000);	// Initialize Money Market account with values
	CDAccount CDAcc("CD", 1000, 0.1);		// Initialize CD account with values

	// Withdraw functions
	NormalACC.withdraw(100);	// Calling withdraw function from Normal Account
	MMAcc.withdraw(100);	// Calling withdraw function from Money Market class
	CDAcc.withdraw(100);	// Calling withdraw function from CD accoount class

	cout << "After the first withdrawal the details are as follows: " << endl;
	cout << NormalACC.getBalance() << endl;
	cout << NormalACC.getHolderName() << endl;
	cout << MMAcc.getHolderName() << endl;
	cout << MMAcc.getBalance() << endl;
	cout << CDAcc.getHolderName() << endl;
	cout << CDAcc.getBalance() << endl;
}
