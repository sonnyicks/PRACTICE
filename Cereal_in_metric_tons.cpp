#include <iostream>
using namespace std;

int main() {
	
	float number_boxes = 0;
	float cereal_weight = 0;
	float in_tons = 0;
	bool run_again = true;
	float metric_ton = 35273.92;
	char yes_or_no = 'Y';

	while (run_again) {
		cout << "How many ounces does this box of cereal weigh?  ";
		cin >> cereal_weight;
		in_tons = cereal_weight / metric_ton;
		number_boxes = metric_ton / cereal_weight;
		cout << "Your cereal weighs " << in_tons << "metric tons." << endl;
		cout << "You would need " << number_boxes << "boxes to make a metric ton." << endl;
		cout << "Would you like to run the program again? (y/n): ";
		cin >> yes_or_no;
		if (yes_or_no == 'y' || yes_or_no == 'Y') {
			run_again = true;
		}
		else { run_again = false;
		}
	}
	return 0;
}