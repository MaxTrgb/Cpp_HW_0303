/*Task3. Find the arithmetic mean of all numbers from 1 to 1000*/

#include <iostream>
using namespace std;


int main()
{
	double x, x1, sum=0, mean; //variables for calculations, mean - arithmetic mean of all numbers

	for (x = 1; x <= 1000; x += 1) { // loop for numbers 1 to 1000

		sum += x; // sum of all numbers

		mean = sum / 1000; //dividing sum by the total number
	}

	cout << "To find the arithmetic mean of the numbers from 1 to 1000 we need to add up all the values 1+2+3...= " << sum << endl;
	cout << "and divide the sum by the number of values: " << sum << " / 1000" << endl;
	cout << "\nThe arithmetic mean for numbers from 1 to 1000 is " << mean << endl; // output for user

}