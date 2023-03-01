/*Task5. Write a program that displays the multiplication table by k, where k is the option number.*/

#include <iostream>
using namespace std;

int main()
{
	int k, mult; // Variables for number and calculations

	cout << "Learn Your Multiplication Tables!\n\nEnter the number: "; cin >> k; // User enters the number

	cout <<"\n" << k << " Time Table:\n"; // A little interface

	for (int c = 1; c <= 10; c++) { // Loop for calculation 

		mult = k * c; // Multiplying numbers here

		cout << "\t\n" << k <<" X " << c << " = " << mult << endl; // Output for user

	}
}