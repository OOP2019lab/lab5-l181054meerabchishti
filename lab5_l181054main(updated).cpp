// lab5.2.cpp : Defines the entry point for the console application.
//


#include <iostream>
#include"header.h"
#include <string>
using namespace std;

int main()
{
	string name1;
	int ID;
	name1="John Doe";
	ID=549002;
	BankAccount myAccount(name1,ID);
	int money1;
	int money2;
	//values were given
	money2=250000;
	money1=50000;
	//to deposit this amount
	myAccount.deposit(money1);
	myAccount.deposit(money2);
	myAccount.print();
	int money3;
	money3=2000;
	myAccount.withdraw(money3);
	myAccount.print();
	system("Pause");
	return 0;
}

