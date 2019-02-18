// lab5.cpp : Defines the entry point for the console application.
//


#include <iostream>
#include"bankacc.h"
#include <string>
using namespace std;

int main()
{
	string name1;
	int ID;
	name1="John Doe";
	ID=549002;
	BankAccount myAccount(name1,ID);
	//myAccount.print();
	int money1;
	int money2;
	money2=250000;
	money1=50000;
	myAccount.deposit(money1);
	//myAccount.print(myAccount);
	myAccount.deposit(money2);
	myAccount.print(myAccount);
	int money3;
	money3=2000;
	myAccount.withdraw(money3);
	myAccount.print(myAccount);
	return 0;
	system("Pause");
}

