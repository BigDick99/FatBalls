#pragma once
#include <string>
class Vending
{
private:
	double payment;
	double netProfit;
	int itemChoice;
	int choice;
public:
	void displayChoices();
	void buyItem();
	double inputMoney(double);
	void dailyReport();
	~Vending();
};

