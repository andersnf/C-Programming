/***********************************************************************************
Program: 		NicoleAnderson_ProgramExerciseII.cpp
Course info: 	CSCI 238, section 001
Author:			Nicole Anderson
Date:			2/11/2014
Description:	This program will add two random numbers together and then will 
				give the answer when the user is ready.
***********************************************************************************/

#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main()
{

srand(time (NULL));
char ignore;
int num1 = rand() % 9899 + 100;
int num2 = rand() % 9899 + 100;
int num3 = num1 + num2;

if (num1 >= 1000)
{
	if (num2 >= 1000)
	{ 
		
		cout << setw(5) << num1 << endl;
		cout << setw(1) << "+" << num2 << endl;
		cout << "------" << endl;
		
	}
	
	else 
	{
	
	cout << setw(5) << num1 << endl;
	cout << setw(1) << "+ " << setw(2) << num2 << endl;
	cout << "------" << endl;
	
	}
}
else
{
	if (num2>1000)
	{
		
		cout << setw(5) << num2 << endl;
		cout << setw(1) << "+ " << setw(2) << num1 << endl;
		cout << "------" << endl;
		
	}
	else
	{
	
		cout << setw(5) << num1 << endl;
		cout << setw(1) << "+" << num2 << endl;
		cout << "------" << endl;
		
	}	
}	

cout << "Waiting on you, strike any key when you're ready" << endl;
cin.get(ignore);
if (num1 >= 1000)
{
	if (num2 >= 1000)
	{ 
		cout << "Answer" << endl;
		cout << setw(5) << num1 << endl;
		cout << setw(1) << "+" << num2 << endl;
		cout << "------" << endl;
		cout << setw(3) << num3 << endl;
	}
	
	else 
	{
	cout << "Answer" << endl;
	cout << setw(5) << num1 << endl;
	cout << setw(1) << "+ " << setw(2) << num2 << endl;
	cout << "------" << endl;
	cout << setw(3) << num3 << endl;
	}
}
else
{
	if (num2>1000)
	{
		cout << "Answer" << endl;
		cout << setw(5) << num2 << endl;
		cout << setw(1) << "+ " << setw(2) << num1 << endl;
		cout << "------" << endl;
		cout << setw(3) << num3 << endl;
	}
	else
	{
	cout << "Answer" << endl;
		cout << setw(5) << num1 << endl;
		cout << setw(1) << "+" << num2 << endl;
		cout << "------" << endl;
		cout << setw(3) << num3 << endl;
	}	
}	


return 0;
}