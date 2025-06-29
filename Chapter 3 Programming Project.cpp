// Chapter 3 Programming Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	//defining variables
	int numCookies;
	double sugarCups, butterCups, flourCups, cookieRatio;
	//querying number of cookies
	std::cout << "How many cookeis do you want to make?  ";
	std::cin >> numCookies; //assigning number to numCookies
	//calculating ingrediants needed
	cookieRatio = (numCookies / 48.0);
	sugarCups = 1.5 * cookieRatio;
	butterCups = 1 * cookieRatio;
	flourCups = 2.75 * cookieRatio;
	//outputing result
	std::cout << "\nTo make " << numCookies << " cookies, you will need:\n";
	std::cout << "Cups of Sugar: " << sugarCups << endl;
	std::cout << "Cups of Butter: " << butterCups << endl;
	std::cout << "Cups of Flour: " << flourCups << endl;
	return 0;
}
