#include "stdafx.h"
#include <iostream>

// Addition
int add(int x, int y)
{
	int z = x + y;
	std::cout << "The sum of " << x << " and " << y << " is: " << z << std::endl;
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
	std::cout << "Glad I could help!" << std::endl;
	return 0;
}