#include "stdafx.h"
#include <iostream>

// Addition
int add(int x, int y)
{
	int z = x + y;
	std::cout << x << " plus " << y << " is " << z << std::endl;
	return z;
}

//Subtraction
int subtract(int x, int y)
{
	int z = x - y;
	std::cout << x << " minus " << y << " is " << z << std::endl;
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
	return 0;
}