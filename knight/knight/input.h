#pragma once
#include <iostream>
#include "variables.h"
#include "check.h"

void getCoordinates()
{
	std::string coord;
	printf("enter start position of the knight (for example, a8)\n");
	std::cin >> coord;
	startpositionX = coord[0] - 'a';
	startpositionY = 8 - (coord[1] - '0');
	checkInput(coord);
}
