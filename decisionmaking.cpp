// decisionmaking.cpp : Defines the entry point for the console application.

// Comparing integers using if statements, relational operators and equality operators

#include "iostream" // allows permissions to perform input and output

namespace std {}

using std::cout; // program uses output
using std::cin; // program uses input
using std::endl; // program uses endline

// function main begins program execution
int main()
{
	int number1; // first integer to compare
	int number2; // second integer to compare

	cout << "Enter two integers to compare:  "; // prompt for inputs
	cin >> number1 >> number2; // read two integers from users

	if (number1 == number2)		// if numbers are =
		cout << number1 << " == " << number2 << endl; 
	if (number1 != number2)		// if numbers are not equal
		cout << number1 << " != " << number2 << endl;
	if (number1 < number2)		// if number 2 > number 1
		cout << number1 << " < " << number2 << endl;
	if (number1 > number2)		// if number 1 > number 2
		cout << number1 << " > " << number2 << endl;
	if (number1 <= number2)		// if number1 less than or equal to number 2
		cout << number1 << " <= " << number2 << endl;
	if (number1 >= number2)		// if number1 greater than or equal to number 2
		cout << number1 << " >= " << number2 << endl;

	system("pause"); // keeps window open otherwise it will automatically close.

    return 0;
} // end function main

