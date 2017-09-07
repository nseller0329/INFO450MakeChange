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
	float TotalPayment;
	float ChangeDue;
	int DollarChange;
	float QuarterChange;
	float DimeChange;
	float NickelChange;

	cout << "Welcome to the change machine of magic. Please enter the cost of your item. (Remeber our machine does not take penny values!)";
	cin >> ItemCost;
	cout << "Please enter the amount you wish to pay";
	cin >> PaymentAmount;

	if (PaymentAmount < ItemCost)
	{ cout << "Insufficient Funds." << endl;
	cout << "Please add funds. Enter the amount you wish to add.";
	cin >> AddFunds;
	PaymentAmount = PaymentAmount + AddFunds;
	cout << PaymentAmount;
	}

	cout << "Thank you. ";


    return 0;
}

