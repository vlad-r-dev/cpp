#include <iostream>
using namespace std;

int main() {

	int age, exp;
	char license;
	
	const int min_age = 22; //Added default value
	const int min_exp = 2;

	cout << "How old are you? : ";
	cin >> age;

	if (age < min_age) {
		cout << "You are not accepted for the job." << endl;
		return 0; // Added a return to end the program if there is a mismatch with the requirements.
	}

	cout << "What work experience do you have? : ";
	cin >> exp;

	if (exp < min_exp) {
		cout << "You are not accepted for the job." << endl;
		return 0;
	}

	cout << "Do you have a category D driver`s license? : ";
	cin >> license;

	if (license == 'y')
		cout << "Greate, you`re hired!" << endl;
	else
		cout << "Sorry, you're not right for us." << endl;
	return 0;
}
