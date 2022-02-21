#pragma once
#include <string>
#include "variables.h"

void displayBoard(int board[][size])
{


	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			printf("%2d ", board[i][j]);
		}
		printf("\n");
	}

}

std::string moves(int board[][size])
{
	char markup[size]{ 'a', 'b', 'c', 'd', 'e', 'f','g', 'h' };
	int count = 1;
	std::string moves;
	while (count != 65)
	{
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size; j++)
			{
				if (board[i][j] == count)
					moves += markup[j] + std::to_string(size - i) + " ";
			}
		}
		count++;
	}
	return moves;
}
