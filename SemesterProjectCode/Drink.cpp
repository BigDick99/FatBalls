#include "VendingMachine.h"
#include "Drink.h"
#include <iostream>

double pepsiCost = 2.00;
double cocacolaCost = 2.00;
double bottledWaterCost = 1.50;
int pepsiQuantity; 
int cocacolaQuantity;
int bottledWaterQuantity;


void chooseDrink()
{
	int drinkChoice = 0;
	std::cout << "What drink would you like? (1 = Coke, 2 = Pepsi, 3 = Bottled water)";
	std::cin >> drinkChoice;
	if (drinkChoice == 1)
	{
		std::cout << "Great Choice! You will recieve your item shortly. Thank you!";
		pepsiQuantity == cocacolaQuantity - 1;
	}
	if (drinkChoice == 2)
	{
		std::cout << "Great Choice! You will recieve your item shortly. Thank you!";
		pepsiQuantity == pepsiQuantity - 1;
	}
	if (drinkChoice == 3)
	{
		
		std::cout << "Great Choice! You will recieve your item shortly. Thank you!";
		pepsiQuantity == bottledWaterQuantity - 1;
	}
}
Drink::~Drink()
{

}