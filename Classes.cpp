#include <iostream>

using namespace std;

struct CDAccount{
	double balance;
	double interest_rate;
	int term;
};


int main(){
	
	CDAccount my_account;
	
	cout << "what is your balance?: ";
	cin >> my_account.balance;
	cout << "What is your interest rate?: ";
	cin >> my_account.interest_rate;
	cout << "What is your term in months?: ";
	cin >> my_account.term;
	cout << "Your bank note: " << endl;
	cout << "Balance: $" << my_account.balance << endl;
	cout << "Interest Rate: " << my_account.interest_rate << " APR" << endl;
	cout << "Term: " << my_account.term << " Months" << endl;
	
	return 0;
}