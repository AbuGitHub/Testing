#include <iostream>
using namespace std;

//Abu test (pull branch)
// Addition
int add(int x, int y)
{
	int z = x + y;
	cout << x << " plus " << y << " is " << z << "\n\n";
	return z;
}

//Subtraction
int subtract(int x, int y)
{
	int z = x - y;
	cout << x << " minus " << y << " is " << z << "\n\n";
	return z;
}

//Multiiplication
int multiply(int x, int y)
{
	int z = x * y;
	cout << x << " times " << y << " is " << z << "\n\n";
	return z;
}

//Division
int divide(int x, int y)
{
	int z = x / y;
	int w = x % y;
	cout << x << " divided by " << y << " is " << z << " with a remainder of " << w << "\n\n";
	return z;
}

// Main calculator
int main()
{
	int x;
	int y;
	int input; 	//Holds user input for which function to perform
	cout << "This is a calculator program." << "\n\n\n";

	do
	{
		cout << "Press 1 to add, 2 to subtract, 3 to multiply, 4 to divide, 0 to quit: " << endl;
		cin >> input;

		if (input == 1)
		{
			cout << "Please enter the 2 numbers you want to add together:" << endl;
			cin >> x;
			cin >> y;
			cout << "Thank you, please hold on while your numbers are added..." << "\n\n";

			add(x, y);
		}

		if (input == 2)
		{
			cout << "Please enter the 2 numbers you want to subtract together:" << endl;
			cin >> x;
			cin >> y;
			subtract(x, y);
		}

		if (input == 3)
		{
			cout << "Please enter the 2 numbers you want to multiply:" << endl;
			cin >> x;
			cin >> y;
			multiply(x, y);
		}

		if (input == 4)
		{
			cout << "Please enter the 2 numbers you want to divide:" << endl;
			cin >> x;
			cin >> y;
			divide(x, y);
		}

	} while (input != 0);
	
	cout << endl;
	return 0;
}
