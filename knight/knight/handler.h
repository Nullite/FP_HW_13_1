#pragma once
#include "variables.h"

void initBoard(int board[][size])
{
	for (int i = 0; i < size; i++)
		for (int j = 0; j < size; j++)
			board[i][j] = 0;
}

bool knightMove(int x, int y)
{
	if (x < 0 || x >= size || y < 0 || y >= size) return false;
	if (board[x][y] != 0) return false;
	
	int moves[8][2] = { {-2, 1}, {-1, 2}, {1, 2}, {2, 1}, {2, -1}, {1, -2} , {-1, -2}, {-2, -1} };
	int newX, newY, move = 1;

	moveCount++;
	itterations++;
	board[x][y] = moveCount;

	if (moveCount == size * size) return true;
	
	for (int i = 0; i < 8; i++)
	{
		newX = x + moves[i][0], newY = y + moves[i][1];
		if (knightMove(newX, newY))
			return true;
	}

	board[x][y] = 0;
	moveCount--;
	return false;
}