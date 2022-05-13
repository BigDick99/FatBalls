#pragma once
#include "VendingMachine.h"

class Drink
{
private:
	std::string name;
	double pepsiCost, cocacolaCost, bottledWaterCost;
	int pepsiQuantity, cocacolaQuantity, bottledWaterQuantity;
	
public:
	void chooseDrink();
	~Drink();
};