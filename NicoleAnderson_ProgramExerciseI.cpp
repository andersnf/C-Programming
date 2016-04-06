/***********************************************************************************
Program: 		NicoleAnderson_ProgramExerciseI.cpp
Course info: 	CSCI 238, section 001
Author:			Nicole Anderson
Date:			2/11/2014
Description:	This program will do currency conversion. Dollars to yen and euros.
				Then euros to pounds.
***********************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

const double EUROS_PER_DOLLAR = 0.87876;
const double YEN_PER_DOLLAR = 117.37;

const double POUND_PER_EURO = 0.75514;

int main()
{
double dollar, yen, euro, pound;

cout << "Please enter a dollar amount: " << endl;
cin >> dollar;
yen = YEN_PER_DOLLAR*dollar;
euro = EUROS_PER_DOLLAR*dollar;
pound = POUND_PER_EURO*euro;

cout << setprecision(2) << fixed;

cout << "You entered $" << dollar << " dollars." << endl;
cout << "\t That is currently equivalent to " << euro << setw(8) << " Euros, " << endl; 
cout << setw(46) << yen << setw(8) << " Yen, and" << endl;
cout << setw(46) << pound << setw(8) << " Pounds!" << endl;

return 0;
}