#include <iostream>
using namespace std;

int main(){
	double n = 0;
	double guess = 0;
	double r = 0;
	int number_of_runs = 100;
	bool keep_running = true;
	char yes_or_no = 'y';

	while (keep_running == true) {
		cout << "What square root would you like to configure? ";
		cin >> n;
		cout << endl << "What is your guess at what the square root of your chosen number is? ";
		cin >> guess;

		while (number_of_runs > 0) {
			r = n / guess;
			guess = (guess + r) / 2;
			number_of_runs = number_of_runs - 1;
		}
		cout << r;
		cout << endl << "Would you like to run it again? ";
		cin >> yes_or_no;
		if (yes_or_no == 'y' || yes_or_no == 'Y') {
			keep_running = true;
			number_of_runs = 100;
		}
		else {
			keep_running = false;
		}
	}
	return 0;
}