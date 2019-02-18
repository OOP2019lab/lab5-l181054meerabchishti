#include<string>
#include <iostream>
#include"header.h"
using namespace std;

void BankAccount::setname(string name)
{
	holdername=name;
}
void  BankAccount:: setID(int ID)
{
	Accnumber=ID;
}
BankAccount::BankAccount(string name,int ID)
{
	setname(name);
	setID(ID);
	Accnumber=ID;
	holdername=name;
	maxtrans=10;
	transactions= new double[maxtrans];
	currenttrans=0;
	balancelimit=200000;
	balance=0;
}
void BankAccount::print()
{
	cout<<"the account holder's name is:"<<holdername<<endl;
	cout<<"the account number is:"<<Accnumber<<endl;
	cout<<"the total number of transactions is:"<<currenttrans<<endl;
	cout<<"the transactions are:"<<endl;
	for(int i=0; i<currenttrans; i++)
	{
		cout<<transactions[i]<<" ";
	}
}
void BankAccount::withdraw(int amount)
{
	if(currenttrans>maxtrans||currenttrans==maxtrans)
	{
		increaseTranCapacity();
	}
	if(balance>amount ||balance==amount)
	{
		balance=balance-amount;
		transactions[currenttrans]=-amount;
		currenttrans++;
		cout<<"Transaction successful"<<endl;

	}
	else
		cout<<"Transaction Unsuccessful: Insufficient balance";

}
void BankAccount::deposit(int amount)
{
	if(currenttrans>maxtrans||currenttrans==maxtrans)
	{
		increaseTranCapacity();
	}
	if(balance+amount<balancelimit || balance+amount==balancelimit)
	{
		balance=balance+amount;
		transactions[currenttrans]=+amount;
		currenttrans++;

	}
	else
	{
		cout<<"Balance limit reached"<<endl;
	}
}
void BankAccount::increaseTranCapacity()
{

	double*	temp=new double[2*maxtrans];
	for(int j=0;j<maxtrans;j++)
	{
		temp[j]=transactions[j];

	}
	delete[]transactions;
	double* transactions=new double[2*maxtrans];
	for(int j=0;j<maxtrans;j++)
	{
		transactions[j]=temp[j];

	}
	delete []temp;
	
}
BankAccount::~BankAccount()
{
	delete[]transactions;
	holdername="NULL";
	Accnumber=0;
	balance=0.0;
	balancelimit=0.0;
	maxtrans=0;
	currenttrans=0;

}
