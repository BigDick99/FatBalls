#include "VendingMachine.h"
#include "Drink.h"
#include "Snack.h"
#include "iostream"
#include "Drink.cpp"


void Vending::displayChoices()
{
	std::cout << "At Devin's vending machine you can get all of the following: Drinks and Snacks";
}
void Vending::buyItem()
{
	std::cout << "Would you like a drink(1) or a snack(2)";
	std::cin >> itemChoice;
	if (itemChoice == 1)
	{
		std::cout << "You would like a drink correct?";
		std::cin >> choice;
		if (choice == 1)
		{
			chooseDrink();
		}
		else
			std::cout << "Have a great day! Hope to see you again soon!";
	
	}
	if (itemChoice == 2)
	{


	}
}
double Vending::inputMoney(double)
{

}
void Vending::dailyReport()
{

}
Vending::~vending()
{

}