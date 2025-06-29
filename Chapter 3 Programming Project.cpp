// Chapter 3 Programming Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int numOne, numTwo, result;//defining varaibles
	srand((unsigned)time(NULL));//providing seed value
	//initializing random 3 digit numbers to numOne & numTwo
	numOne = 100 + (rand() % 900);
	numTwo = 100 + (rand() % 900);
	//Calculating result of addition
	result = numOne + numTwo;
	std::cout << "What is the sum of: " << endl;
	std::cout << numOne << "\n+\n";
	std::cout << numTwo << endl;
	std::cin.get();
	std::cout << "The correct answer is: " << endl;
	std::cout << result << endl;
	return 0;
}
