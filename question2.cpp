#include <iostream>
using namespace std;

// Function tp print the divisors of a positive integer

void printDivisors(int number){
	cout<<"Divisors of " << number << " are:" << endl;
	for (int i = number; i > 0; --i){
		if (number % i == 0){
		cout << i << endl;
		}
	}
}

int main() {
	int number;
	char choice;
	
	cout<<"This program will display the positive divisors of positive integers you supply." << endl;
	
	do{
		cout<<"please enter a positive integer: ";
		cin>>number;
		
		// check for valid input
		if(number <= 0){
			cout<< number << " is not a positive integer." << endl;
			continue;  //promt user again

		}
		
	// print divisors
	
	printDivisors(number);
	
	// ask if the user wants to continue
	cout<<" Would you like to see the divisors of another integer (Y/N)? ";
	cin >> choice;
	
	// Validate user choice
	
	while (choice != 'Y' && choice != 'y'  && choice != 'N'  && choice != 'n'){
		cout << "Please respond with Y (or y) for yes and N (or n) for no." << endl;
		cout<< "would you like to see the divisors of another integer (Y/N)? ";
		cin >> choice;
	}
	} while (choice == 'Y' || choice == 'y');
	
	return 0;
}
