/*Task1. Write a program that calculates the sum of integers from a to 500 (the value is entered from the keyboard)*/

#include <iostream>
using namespace std;

int main()
{
    int a, sum = 0; // variable a is starting number sum is variable for calculation
    
    cout << "Enter a value for a: "; cin >> a; // user enters a number

    if (a <= 500) { // condition for the number: not bigger than 500
         

        for (int i = a; i <= 500; i++) { //"For" loop with counter from a to 500 

            sum += i; // adding all the numbers
        }

        cout << "The sum of integers from " << a << " to 500 is " << sum << endl; //output to the user
    }
    else { // if number is bigger user gets notification

        cout << "Wrong value!" << endl;

    }
}