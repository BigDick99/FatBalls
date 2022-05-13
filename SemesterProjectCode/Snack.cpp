#include "VendingMachine.h"
#include "Snack.h"
#include <iostream>



double hersheyCost = 2.00;
double chipsCost = 1.75;
double cliffCost = 4.00;
int hersheyQuantity;
int chipsQuantity;
int cliffQuantity;

void chooseSnack(int)
{
	int drinkChoice = 0;
	std::cout << "What drink would you like? (1 = Hershey, 2 = Chips, 3 = Cliff bar)";
	std::cin >> drinkChoice;
	if (drinkChoice == 1)
	{
		std::cout << "Great Choice! You will recieve your item shortly. Thank you!";
		hersheyQuantity == hersheyQuantity - 1;
	}
	if (drinkChoice == 2)
	{
		std::cout << "Great Choice! You will recieve your item shortly. Thank you!";
		chipsQuantity == chipsQuantity - 1;
	}
	if (drinkChoice == 3)
	{

		std::cout << "Great Choice! You will recieve your item shortly. Thank you!";
		cliffQuantity == cliffQuantity - 1;
	}
}
Snack::~Snack()
{

}