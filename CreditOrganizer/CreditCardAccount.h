#include "LoyaltyScheme.h"

using namespace System;

#pragma once

ref class CreditCardAccount
{
public:
	CreditCardAccount(long number, double limit);
	void SetCreditLimit(double amount);
	bool MakePurchase(double amount);
	void MakeRepayment(double amount);
	void PrintStatement();
	long GetAccountNumber();
	static int GetNumberOfAccounts();
	static CreditCardAccount();
	literal String ^name = "Super Platinum Card";
	void RedeemLoyaltyPoints();

private:
	long accountNumber;
	double currentBalance;
	double creditLimit;
	static int numberOfAccounts = 0;
	static double interestRate;
	LoyaltyScheme^ scheme; //Handle to a LoyaltyScheme object

};

