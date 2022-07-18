#include <iostream>
#include <string>

using namespace std;

void SumAndAverage()
{
	// variables
	double a, b, c;
	double sum;
	double average;

	// prompt user for values
	cout << "Please input three numbers to be calculated:\n";

	// get values from user
	cin >> a >> b >> c;

	//add values
	sum = a + b + c;

	//average values
	average = (a + b + c) / 3;

	// output values
	cout << "The sum of " << a << ", " << b << " and " << c << " is " << sum << endl;
	cout << "The average of " << a << ", " << b << " and " << c << " is " << average << endl;
}