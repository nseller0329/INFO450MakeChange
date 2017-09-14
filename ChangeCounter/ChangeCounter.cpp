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
	while (true) // initiates program return loop
	{
		cout << "Welcome to the change machine of magic. Please enter the cost of your item. (Remember our machine does not take penny values! Or Enter 0 to exit.)" << endl;
		cin >> ItemCost; //gets user input for ItemCost variable

		if (ItemCost == 0) // if the item cost is equal to 0 the program will exit
			break;

		cout << "Please enter the amount you wish to pay." << endl;
		cin >> PaymentAmount; // gets amount that the user wishes to pay for the item 

		while (PaymentAmount < ItemCost) // if the payment is less than the item cost the user will be prompted to add more change
		{
			cout << "Insufficient Funds." << endl;
			cout << "Please add funds. Enter the amount you wish to add." << endl;
			cin >> AddFunds;
			PaymentAmount = PaymentAmount + AddFunds; // adds the additional funds to the existing payment amount 
		}

		std::cout << std::fixed<<std::setprecision(2) << "You are paying $ " << PaymentAmount << endl; // set precision and fixed allows for the display to look nicer

		if (PaymentAmount == ItemCost) //if the payment is equal to the item cost than no change will be due
			cout << "No Change Due" << endl;

		else if (PaymentAmount > ItemCost) // if the payment is greater than the item cost than change will be made
		{
			ChangeDue = PaymentAmount - ItemCost; // calculates the amount of change due
			std::cout << std::fixed << std::setprecision(2) << "Your change is $ " << ChangeDue << endl;
			DollarChange = ChangeDue / 1.00; // figures out the number of dollars that are due in change 
			int RemainChangeDue = (ChangeDue - DollarChange) * 100; // for easier calculation , the remaining change is conerted into an integer 
			QuarterChange = RemainChangeDue / 25;
			DimeChange = (RemainChangeDue %= 25) / 10;
			NickelChange = (RemainChangeDue %= 10) / 5;

			cout << "That is equal to: " << endl;
			cout << DollarChange << " Dollars" << endl;
			cout << QuarterChange << " Quarters" << endl;
			cout << DimeChange << " Dimes" << endl;
			cout << NickelChange << " Nickels" << endl;
			cout << "\n";

		}

	}

   return 0;
}

