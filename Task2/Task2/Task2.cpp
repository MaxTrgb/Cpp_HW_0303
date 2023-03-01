/*Task2. Write a program that asks for two integers x and y, and then calculates and outputs the value of x to the y power*/

#include <iostream>
using namespace std;


int main()
{
	int x, y, i; //variables for the numbers and calculations 
	long long result = 1; // long long to accommodate a large number

	cout << "Please enter x: "; cin >> x; // user inputs data
	cout << "Please enter y: "; cin >> y;

	for (i = 0; i < y; i++) { //loop runs y times
		 
		result *= x; //multiplying result by x each time
	}

	cout << x << " to the power of " << y << " is " << result << endl;  // display result for user

}	
/* The pow() function returns the result of the first argument raised to the power of the second argument
  but we can calculate only small numbers

int x, y;

cout << "Please enter x: "; cin >> x;

cout << "Please enter y: "; cin >> y;

cout << x << " to the power of " << y << " is " << pow(x, y) << endl; */ 