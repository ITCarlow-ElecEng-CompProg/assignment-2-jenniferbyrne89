/** Jennifer Byrne
    20/09/2017
    Lab 2
    Factorial Calculator */

/** Preprocessor directives */
#include <iostream>
#include <iomanip>

/** Enables cout, cin and endl */
using namespace std;

/** Main function */
int main()
{
    /** Declaring variables */
    double num = -1 , fact = 1;

    /** Specifies the number of decimal points to ce displayed in answer */
    cout << fixed;
    cout << setprecision(2);

    /** Conditions for while loop
        Enter pos value */
    while (num <= 0)
    {
        cout << "Enter positive integer value :" << "\t" ;
        cin >> num ;
    }

    /** Condtions for while loop */
    while (num >= 1)
    {
        /** compounding values for factorial calculations */
        fact = fact * num;
        /** Decreasing value for num by one after each loop */
        num--;
    }
    /** Display solution on console */
    cout << "\n" << "Factorial : " << "\t" << fact << endl;

    /** Terminate main function */
    return 0;
}
