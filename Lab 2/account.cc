#include <iostream>
#include <string>
#include <vector>

using namespace std;

class account {
	string name;
	double balance;
public:
	account(string n);
	account(string n, double initial_balance);
	string get_name() const;
	double get_balance() const;
	void deposit(double amount);
	void withdraw(double amount);
};

class bank {
	vector<account> accounts;

public:
	void add_account(const account &acct) {
		accounts.push_back(acct);
	}

	void print_accounts() {
		for (int i = 0; i < accounts.size(); i++) {
			cout << accounts[i].get_name() << "-" << accounts[i].get_balance() << '\n';
		}
	}

	void deposit(string name, double amount) {
		for (int i = 0; i < accounts.size(); i++)
			if (accounts[i].get_name() == name)
				accounts[i].deposit(amount);
	}

	void withdraw(string name, double amount) {
		for (int i = 0; i < accounts.size(); i++)
			if (accounts[i].get_name() == name)
				accounts[i].withdraw(amount);
	}

	void add_interest(double rate) {
		for (int i = 0; i < accounts.size(); i++)
			accounts[i].deposit(
				accounts[i].get_balance() * rate / 100);
	}

	vector<account> get_account() const { return accounts; }
};

int main() {
	account jim("Jim");
	account jam("Jam", 1000000);
	jim.deposit(20);
	jam.withdraw(20);

	cout << jim.get_name() << "-" << jim.get_balance() << '\n';
	cout << jam.get_name() << "-" << jam.get_balance() <<'\n';

	bank bank;
	bank.add_account(adam);
	bank.print_accounts();

	return 0;
}

account::account(string n) : name(n), balance(0) {}
account::account(string n, double initial_balance) :
name(n), balance(initial_balance) {}

string account::get_name() const { return name; }
double account::get_balance() const { return balance; }
void account::deposit(double amount) {
	balance += amount;
}
void account::withdraw(double amount) {
	balance -= amount;
}
