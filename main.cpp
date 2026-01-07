#include <iostream>
using namespace std;

int main() {

	int age, exp; // Creating variables
	char license;
	
	cout << "How old are you? : "; // Receiving data from the user
	cin >> age;

	cout << "What work experience do you have? : ";
	cin >> exp;

	cout << "Do you have a category D driver`s license? : ";
	cin >> license;

	if (age >= 22 && exp >= 2 && license == 'y') // We create conditions and verify them
		cout << "Greate, you`re hired!" << endl;
	else
		cout << "Sorry, you're not right for us" << endl;
}
