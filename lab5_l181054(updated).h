#include<string>
using namespace std;

class BankAccount
{
	string holdername;
	int Accnumber;
	float balance;
	float balancelimit;
	int maxtrans;
	double* transactions;
	int currenttrans;
public:
	//constructor
	BankAccount(string name,int ID);
	~BankAccount();
	//to print the information of bank account
	void print();
	//to set name 
	void setname(string name);
	//to set ID
	void setID(int ID);
	//to withdraw and save changes to transactions array
	void withdraw(int amount);
	//to deposit and save changes to transactions array
	void deposit(int amount);
	//to check if the array capacity has reached and then incresing the size
	void increaseTranCapacity();
};