#include <iostream>
using namespace std;

int main()
{
	//Reversing a number entered
	int number, reversedNumber = 0;
	cout << "Please enter a number to be reversed: ";
	cin >> number; 

	while (number != 0)
	{
		reversedNumber *= 10;
		// int lastDigit = number % 10;  These 2 lines are alternate way of doing it
		// reversedNumber+=lastDigit;
		reversedNumber += number % 10;
		number /= 10;
	}
	
	cout << "Reversed number: " << reversedNumber;


	system("pause>0");
}

