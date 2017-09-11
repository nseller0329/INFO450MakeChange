// ChangeCounter.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip> 
using namespace std;

int main()
{
	double ItemCost;
	double PaymentAmount;
	double AddFunds;
	double ChangeDue;
	int DollarChange;
	int QuarterChange;
	int DimeChange;
	int NickelChange;
	while (true)
	{
		cout << "Welcome to the change machine of magic. Please enter the cost of your item. (Remember our machine does not take penny values! Or Enter 0 to exit.)" << endl;
		cin >> ItemCost;

		if (ItemCost == 0)
			break;

		cout << "Please enter the amount you wish to pay." << endl;
		cin >> PaymentAmount;

		while (PaymentAmount < ItemCost)
		{
			cout << "Insufficient Funds." << endl;
			cout << "Please add funds. Enter the amount you wish to add." << endl;
			cin >> AddFunds;
			PaymentAmount = PaymentAmount + AddFunds;
		}

		std::cout << std::fixed<<std::setprecision(2) << "You are paying $ " << PaymentAmount << endl;

		if (PaymentAmount == ItemCost)
			cout << "No Change Due" << endl;

		else if (PaymentAmount > ItemCost)
		{
			ChangeDue = PaymentAmount - ItemCost;
			std::cout << std::fixed << std::setprecision(2) << "Your change is $ " << ChangeDue << endl;
			DollarChange = ChangeDue / 1.00;
			int RemainChangeDue = (ChangeDue - DollarChange) * 100;
			QuarterChange = RemainChangeDue / 25;
			DimeChange = (RemainChangeDue %= 25) / 10;
			NickelChange = (RemainChangeDue %= 10) / 5;

			cout << "That is equal to: " << endl;
			cout << DollarChange << " Dollars" << endl;
			cout << QuarterChange << " Quarters" << endl;
			cout << DimeChange << " Dimes" << endl;
			cout << NickelChange << " Nickels" << endl;

		}

	}

   return 0;
}

