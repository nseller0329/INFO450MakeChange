// ChangeCounter.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	float ItemCost;
	float PaymentAmount;
	float AddFunds;
	float ChangeDue;
	int DollarChange;
	int QuarterChange;
	int DimeChange;
	int NickelChange;

	cout << "Welcome to the change machine of magic. Please enter the cost of your item. (Remember our machine does not take penny values!)" << endl;
	cin >> ItemCost;
	cout << "Please enter the amount you wish to pay." << endl;
	cin >> PaymentAmount;

while (PaymentAmount< ItemCost)
	{ cout << "Insufficient Funds." << endl;
	cout << "Please add funds. Enter the amount you wish to add." << endl;
	cin >> AddFunds;
	PaymentAmount = PaymentAmount + AddFunds;
	}

cout << "You are paying " << PaymentAmount << endl;

if (PaymentAmount == ItemCost)
cout << "No Change Due" << endl;

else if (PaymentAmount > ItemCost)
{
	    ChangeDue = PaymentAmount - ItemCost;
		cout << "Your change is "<< ChangeDue << endl;
		DollarChange = ChangeDue / 1.00;
		int RemainChangeDue = (ChangeDue - DollarChange) * 100;
		QuarterChange = RemainChangeDue / 25;
		DimeChange = (RemainChangeDue%=25) / 10;
		NickelChange = (RemainChangeDue%=10) / 5;

		cout << "That is equal to " << endl; 
		cout << DollarChange << " Dollars" << endl;
		cout << QuarterChange << " Quarters" << endl;
		cout << DimeChange << " Dimes" << endl;
		cout << NickelChange << " Nickels" << endl;

}



   return 0;
}

