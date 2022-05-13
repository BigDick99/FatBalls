#pragma once
#include "VendingMachine.h"

class Snack
{
private:
	std::string name;
	double hersheyCost, chipsCost, cliffCost;
	int hersheyQuantity, chipsQuantity, cliffQuantity;
	
public:
	void chooseSnack(int);
	~Snack();
};