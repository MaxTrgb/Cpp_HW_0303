/*Task4. Find the product of all numbers from a to 20 */

#include <iostream>
using namespace std;


int main()
{
    long long int a, i, mult = 1; // variable must be large because we multiplying numbers. mult is variable for product of numbers

    cout << "Enter value for a: "; cin >> a; // user enters a number

    if (a <= 20 && a >=1) { // condition for the number: not bigger than 20 and lower than 1


        for (i = a; i <= 20; i++) { //"For" loop with counter from a to 20

            mult *= i; // multiplying numbers 
        }

        cout << "The product of integers from " << a << " to 20 is " << mult << endl; //output to the user
    }
    else { // if number is bigger or lower user gets notification

        cout << "Wrong value!" << endl;

    }

}