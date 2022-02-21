#pragma once
#include "variables.h"
struct check
{
	int rangeError;
	int lengthError;
};

void checkInput(std::string &coord)
{
	
	if (startpositionX < 0 || startpositionX > 7 || startpositionY < 0 || startpositionY > 7)
	{
		check error{-1, 0};
		throw error.rangeError;
		return;
	}
	if (coord.length() != 2)
	{
		check error{0, -2};
		throw error.lengthError;
		return;
	}
		
}
