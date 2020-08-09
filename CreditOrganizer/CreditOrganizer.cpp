#include "pch.h"
//#include "stdafx.h"
#include "CreditCardAccount.h"

using namespace System;

int main(array<System::String ^> ^args)
{
    Console::Write("Card name is");
    Console::WriteLine(CreditCardAccount::name);
    int n = CreditCardAccount::GetNumberOfAccounts();
    Console::Write("Number of account initially:");
    Console::WriteLine(n);
    Console::WriteLine("\nCreating first object");
    CreditCardAccount^ account1;
    account1 = gcnew CreditCardAccount(12345, 2000);
    Console::WriteLine("\nMaking a purchase(300)");
    account1->MakePurchase(300);
    Console::WriteLine("\nMaking a purchase (700)");
    account1->MakePurchase(700);
    Console::WriteLine("\nMaking a purchase (500)");
    account1->MakePurchase(500);
    Console::WriteLine("\nRedeeming points");
    account1->RedeemLoyaltyPoints();
    
    CreditCardAccount^ myAccount; // Declare a handle 
    myAccount = gcnew CreditCardAccount(1234,2500); // Create a new CreditCardAccount 
    myAccount->SetCreditLimit(1000); 
    myAccount->MakePurchase(1000); // Use the -> operator to invoke member functions 
    myAccount->MakeRepayment(700); 
    myAccount->PrintStatement(); 
    long num = myAccount->GetAccountNumber();

    Console::Write("Account number: ");
    Console::WriteLine(num);

   
    account1->MakePurchase(300);
    account1->PrintStatement();
    Console::WriteLine("\nCreating second object");
    CreditCardAccount^ account2;
    account2 = gcnew CreditCardAccount(67890, 5000);
    account2->MakePurchase(750);
    account2->PrintStatement();

    
  
    

    return 0;
}

