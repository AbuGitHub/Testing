#include "stdafx.h"
#include <iostream>
//Abu test (pull branch)
// Addition
int add(int x, int y)
{
	using namespace std;

	int z = x + y;
	cout << x << " plus " << y << " is " << z << endl;

	return z;
}

//Subtraction
int subtract(int x, int y)
{
	using namespace std;

	int z = x - y;
	cout << x << " minus " << y << " is " << z << endl;

	return z;
} 

//Multiiplication
int multiply(int x, int y)
{
	using namespace std;

	int z = x * y;
	cout << x << " times " << y << " is " << z << endl;

	return z;
}

//Division
int divide(int x, int y)
{
	using namespace std;

	int z = x / y;
	int w = x % y;
	cout << x << " divided by " << y << " is " << z << " with a remainder of " << w << endl;

	return z;
}

// Main calculator
int main()
{
	int x;
	int y;

	std::cout << "Please enter the 2 numbers you want to add together:" << std::endl;
	std::cin >> x;
	std::cin >> y;
	std::cout << "Thank you, please hold on while your numbers are added..." << std::endl;

	add(x, y);

	subtract(x, y);

	multiply(x, y);

	divide(x, y);

	return 0;
}
