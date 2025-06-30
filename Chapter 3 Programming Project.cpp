#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
	int timesCompound;
	double interestRate, principal, interestAmount, savingsAmount;

	// Input
	cout << "Enter your principal: ";
	cin >> principal;
	cout << "\nEnter your interest rate: ";
	cin >> interestRate;
	interestRate = interestRate / 100;  // Convert from percent to decimal
	cout << "\nEnter the number of times the interest is compounded per year: ";
	cin >> timesCompound;

	// Calculate compound interest
	double temp = pow((1 + (interestRate / timesCompound)), timesCompound);
	savingsAmount = principal * temp;
	interestAmount = savingsAmount - principal;

	// Output
	cout << fixed << setprecision(2);
	cout << left << setw(20) << "\nInterest Rate:" << right << setw(20) << (interestRate * 100) << "%" << endl;
	cout << left << setw(20) << "Times Compounded:" << right << setw(20) << timesCompound << endl;
	cout << left << setw(20) << "Principal:" << right << setw(12) << "$" << setw(8) << fixed << setprecision(2) << principal << endl;
	cout << left << setw(20) << "Interest:" << right << setw(12) << "$" << setw(8) << fixed << setprecision(2) << interestAmount << endl;
	cout << left << setw(20) << "Amount in Savings:" << right << setw(12) << "$" << setw(8) << fixed << setprecision(2) << savingsAmount << endl;

	return 0;
}
