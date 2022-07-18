#include <iostream>
#include <string>
#include "Challenge1.h"
#include "Challenge2.h"

using namespace std;

int main()
{
	double number;
	double result;

	// prompt user for value
	cout << "Please input number to be cubed.\n";

	// get value from user
	cin >> number;

	// call function
	result = NumberCubed(number);

	// output results
	cout << number << " cubed is " << result << endl;

	// call SumAndAverage
	SumAndAverage();

}
