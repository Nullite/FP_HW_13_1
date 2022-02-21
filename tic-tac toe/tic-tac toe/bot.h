#pragma once
#include "variables.h"

int botLogicIfSecond()
{
	int move;

	if (board[cells[2]] == zero && board[cells[2]] == board[cells[1]] && board[cells[0]] == ' ') return move = 0;
	if (board[cells[8]] == zero && board[cells[8]] == board[cells[4]] && board[cells[0]] == ' ') return move = 0;
	if (board[cells[6]] == zero && board[cells[6]] == board[cells[3]] && board[cells[0]] == ' ') return move = 0;
	if (board[cells[0]] == zero && board[cells[0]] == board[cells[2]] && board[cells[1]] == ' ') return move = 1;
	if (board[cells[7]] == zero && board[cells[7]] == board[cells[4]] && board[cells[1]] == ' ') return move = 1;
	if (board[cells[0]] == zero && board[cells[0]] == board[cells[1]] && board[cells[2]] == ' ') return move = 2;
	if (board[cells[6]] == zero && board[cells[6]] == board[cells[4]] && board[cells[2]] == ' ') return move = 2;
	if (board[cells[8]] == zero && board[cells[8]] == board[cells[5]] && board[cells[2]] == ' ') return move = 2;
	if (board[cells[0]] == zero && board[cells[0]] == board[cells[6]] && board[cells[3]] == ' ') return move = 3;
	if (board[cells[5]] == zero && board[cells[5]] == board[cells[4]] && board[cells[3]] == ' ') return move = 3;
	if (board[cells[0]] == zero && board[cells[0]] == board[cells[8]] && board[cells[4]] == ' ') return move = 4;
	if (board[cells[1]] == zero && board[cells[1]] == board[cells[7]] && board[cells[4]] == ' ') return move = 4;
	if (board[cells[2]] == zero && board[cells[2]] == board[cells[6]] && board[cells[4]] == ' ') return move = 4;
	if (board[cells[3]] == zero && board[cells[3]] == board[cells[5]] && board[cells[4]] == ' ') return move = 4;
	if (board[cells[3]] == zero && board[cells[3]] == board[cells[4]] && board[cells[5]] == ' ') return move = 5;
	if (board[cells[2]] == zero && board[cells[2]] == board[cells[8]] && board[cells[5]] == ' ') return move = 5;
	if (board[cells[0]] == zero && board[cells[0]] == board[cells[3]] && board[cells[6]] == ' ') return move = 6;
	if (board[cells[8]] == zero && board[cells[8]] == board[cells[7]] && board[cells[6]] == ' ') return move = 6;
	if (board[cells[2]] == zero && board[cells[2]] == board[cells[4]] && board[cells[6]] == ' ') return move = 6;
	if (board[cells[1]] == zero && board[cells[1]] == board[cells[4]] && board[cells[7]] == ' ') return move = 7;
	if (board[cells[6]] == zero && board[cells[6]] == board[cells[8]] && board[cells[7]] == ' ') return move = 7;
	if (board[cells[0]] == zero && board[cells[0]] == board[cells[4]] && board[cells[8]] == ' ') return move = 8;
	if (board[cells[2]] == zero && board[cells[2]] == board[cells[5]] && board[cells[8]] == ' ') return move = 8;
	if (board[cells[6]] == zero && board[cells[6]] == board[cells[7]] && board[cells[8]] == ' ') return move = 8;


	if (board[cells[2]] == cross && board[cells[2]] == board[cells[1]] && board[cells[0]] == ' ') return move = 0;
	if (board[cells[8]] == cross && board[cells[8]] == board[cells[4]] && board[cells[0]] == ' ') return move = 0;
	if (board[cells[6]] == cross && board[cells[6]] == board[cells[3]] && board[cells[0]] == ' ') return move = 0;
	if (board[cells[0]] == cross && board[cells[0]] == board[cells[2]] && board[cells[1]] == ' ') return move = 1;
	if (board[cells[7]] == cross && board[cells[7]] == board[cells[4]] && board[cells[1]] == ' ') return move = 1;
	if (board[cells[0]] == cross && board[cells[0]] == board[cells[1]] && board[cells[2]] == ' ') return move = 2;
	if (board[cells[6]] == cross && board[cells[6]] == board[cells[4]] && board[cells[2]] == ' ') return move = 2;
	if (board[cells[8]] == cross && board[cells[8]] == board[cells[5]] && board[cells[2]] == ' ') return move = 2;
	if (board[cells[0]] == cross && board[cells[0]] == board[cells[6]] && board[cells[3]] == ' ') return move = 3;
	if (board[cells[5]] == cross && board[cells[5]] == board[cells[4]] && board[cells[3]] == ' ') return move = 3;
	if (board[cells[0]] == cross && board[cells[0]] == board[cells[8]] && board[cells[4]] == ' ') return move = 4;
	if (board[cells[1]] == cross && board[cells[1]] == board[cells[7]] && board[cells[4]] == ' ') return move = 4;
	if (board[cells[2]] == cross && board[cells[2]] == board[cells[6]] && board[cells[4]] == ' ') return move = 4;
	if (board[cells[3]] == cross && board[cells[3]] == board[cells[5]] && board[cells[4]] == ' ') return move = 4;
	if (board[cells[3]] == cross && board[cells[3]] == board[cells[4]] && board[cells[5]] == ' ') return move = 5;
	if (board[cells[2]] == cross && board[cells[2]] == board[cells[8]] && board[cells[5]] == ' ') return move = 5;
	if (board[cells[0]] == cross && board[cells[0]] == board[cells[3]] && board[cells[6]] == ' ') return move = 6;
	if (board[cells[8]] == cross && board[cells[8]] == board[cells[7]] && board[cells[6]] == ' ') return move = 6;
	if (board[cells[2]] == cross && board[cells[2]] == board[cells[4]] && board[cells[6]] == ' ') return move = 6;
	if (board[cells[1]] == cross && board[cells[1]] == board[cells[4]] && board[cells[7]] == ' ') return move = 7;
	if (board[cells[6]] == cross && board[cells[6]] == board[cells[8]] && board[cells[7]] == ' ') return move = 7;
	if (board[cells[0]] == cross && board[cells[0]] == board[cells[4]] && board[cells[8]] == ' ') return move = 8;
	if (board[cells[2]] == cross && board[cells[2]] == board[cells[5]] && board[cells[8]] == ' ') return move = 8;
	if (board[cells[6]] == cross && board[cells[6]] == board[cells[7]] && board[cells[8]] == ' ') return move = 8;

	if (board[cells[0]] == cross && board[cells[0]] == board[cells[8]] && board[cells[5]] == ' ') return move = 5;
	if (board[cells[0]] == cross && board[cells[0]] == board[cells[8]] && board[cells[3]] == ' ') return move = 3;
	if (board[cells[0]] == cross && board[cells[0]] == board[cells[8]] && board[cells[7]] == ' ') return move = 7;
	if (board[cells[0]] == cross && board[cells[0]] == board[cells[8]] && board[cells[1]] == ' ') return move = 1;

	if (board[cells[2]] == cross && board[cells[2]] == board[cells[6]] && board[cells[3]] == ' ') return move = 3;
	if (board[cells[2]] == cross && board[cells[2]] == board[cells[6]] && board[cells[7]] == ' ') return move = 7;
	if (board[cells[2]] == cross && board[cells[2]] == board[cells[6]] && board[cells[1]] == ' ') return move = 1;
	if (board[cells[2]] == cross && board[cells[2]] == board[cells[6]] && board[cells[5]] == ' ') return move = 5;

	if (board[cells[4]] == ' ') return move = 4;
	if (board[cells[4]] == zero && board[cells[0]] == ' ' && board[cells[8]] == ' ') return move = 0;
	if (board[cells[4]] == zero && board[cells[2]] == ' ' && board[cells[6]] == ' ') return move = 2;
	if (board[cells[4]] == zero && board[cells[6]] == ' ' && board[cells[2]] == ' ') return move = 6;
	if (board[cells[4]] == zero && board[cells[8]] == ' ' && board[cells[0]] == ' ') return move = 8;

	if (board[cells[4]] == cross && board[cells[0]] == ' ' && board[cells[8]] == ' ') return move = 8;
	if (board[cells[4]] == cross && board[cells[2]] == ' ' && board[cells[6]] == ' ') return move = 2;

	return -1;
}

int botLogicIfFirst()
{
	int move;
	
	if (board[cells[0]] == ' ' && board[cells[1]] == ' ' && board[cells[2]] == ' ' && board[cells[3]] == ' ' && board[cells[4]] == ' ' && board[cells[5]] == ' ' && board[cells[6]] == ' ' && board[cells[7]] == ' ' && board[cells[8]] == ' ')
	{
		srand(time(nullptr));
		int firstMove = rand() % 4;

		switch (firstMove)
		{
		case 0:
			return move = 0;
		case 1:
			return move = 2;
		case 2:
			return move = 6;

		case 3:
			return move = 8;
		}
	}
	if (board[cells[2]] == cross && board[cells[2]] == board[cells[1]] && board[cells[0]] == ' ') return move = 0;
	if (board[cells[8]] == cross && board[cells[8]] == board[cells[4]] && board[cells[0]] == ' ') return move = 0;
	if (board[cells[6]] == cross && board[cells[6]] == board[cells[3]] && board[cells[0]] == ' ') return move = 0;
	if (board[cells[0]] == cross && board[cells[0]] == board[cells[2]] && board[cells[1]] == ' ') return move = 1;
	if (board[cells[7]] == cross && board[cells[7]] == board[cells[4]] && board[cells[1]] == ' ') return move = 1;
	if (board[cells[0]] == cross && board[cells[0]] == board[cells[1]] && board[cells[2]] == ' ') return move = 2;
	if (board[cells[6]] == cross && board[cells[6]] == board[cells[4]] && board[cells[2]] == ' ') return move = 2;
	if (board[cells[8]] == cross && board[cells[8]] == board[cells[5]] && board[cells[2]] == ' ') return move = 2;
	if (board[cells[0]] == cross && board[cells[0]] == board[cells[6]] && board[cells[3]] == ' ') return move = 3;
	if (board[cells[5]] == cross && board[cells[5]] == board[cells[4]] && board[cells[3]] == ' ') return move = 3;
	if (board[cells[0]] == cross && board[cells[0]] == board[cells[8]] && board[cells[4]] == ' ') return move = 4;
	if (board[cells[1]] == cross && board[cells[1]] == board[cells[7]] && board[cells[4]] == ' ') return move = 4;
	if (board[cells[2]] == cross && board[cells[2]] == board[cells[6]] && board[cells[4]] == ' ') return move = 4;
	if (board[cells[3]] == cross && board[cells[3]] == board[cells[5]] && board[cells[4]] == ' ') return move = 4;
	if (board[cells[3]] == cross && board[cells[3]] == board[cells[4]] && board[cells[5]] == ' ') return move = 5;
	if (board[cells[2]] == cross && board[cells[2]] == board[cells[8]] && board[cells[5]] == ' ') return move = 5;
	if (board[cells[0]] == cross && board[cells[0]] == board[cells[3]] && board[cells[6]] == ' ') return move = 6;
	if (board[cells[8]] == cross && board[cells[8]] == board[cells[7]] && board[cells[6]] == ' ') return move = 6;
	if (board[cells[2]] == cross && board[cells[2]] == board[cells[4]] && board[cells[6]] == ' ') return move = 6;
	if (board[cells[1]] == cross && board[cells[1]] == board[cells[4]] && board[cells[7]] == ' ') return move = 7;
	if (board[cells[6]] == cross && board[cells[6]] == board[cells[8]] && board[cells[7]] == ' ') return move = 7;
	if (board[cells[0]] == cross && board[cells[0]] == board[cells[4]] && board[cells[8]] == ' ') return move = 8;
	if (board[cells[2]] == cross && board[cells[2]] == board[cells[5]] && board[cells[8]] == ' ') return move = 8;
	if (board[cells[6]] == cross && board[cells[6]] == board[cells[7]] && board[cells[8]] == ' ') return move = 8;

	if (board[cells[2]] == zero && board[cells[2]] == board[cells[1]] && board[cells[0]] == ' ') return move = 0;
	if (board[cells[8]] == zero && board[cells[8]] == board[cells[4]] && board[cells[0]] == ' ') return move = 0;
	if (board[cells[6]] == zero && board[cells[6]] == board[cells[3]] && board[cells[0]] == ' ') return move = 0;
	if (board[cells[0]] == zero && board[cells[0]] == board[cells[2]] && board[cells[1]] == ' ') return move = 1;
	if (board[cells[7]] == zero && board[cells[7]] == board[cells[4]] && board[cells[1]] == ' ') return move = 1;
	if (board[cells[0]] == zero && board[cells[0]] == board[cells[1]] && board[cells[2]] == ' ') return move = 2;
	if (board[cells[6]] == zero && board[cells[6]] == board[cells[4]] && board[cells[2]] == ' ') return move = 2;
	if (board[cells[8]] == zero && board[cells[8]] == board[cells[5]] && board[cells[2]] == ' ') return move = 2;
	if (board[cells[0]] == zero && board[cells[0]] == board[cells[6]] && board[cells[3]] == ' ') return move = 3;
	if (board[cells[5]] == zero && board[cells[5]] == board[cells[4]] && board[cells[3]] == ' ') return move = 3;
	if (board[cells[0]] == zero && board[cells[0]] == board[cells[8]] && board[cells[4]] == ' ') return move = 4;
	if (board[cells[1]] == zero && board[cells[1]] == board[cells[7]] && board[cells[4]] == ' ') return move = 4;
	if (board[cells[2]] == zero && board[cells[2]] == board[cells[6]] && board[cells[4]] == ' ') return move = 4;
	if (board[cells[3]] == zero && board[cells[3]] == board[cells[5]] && board[cells[4]] == ' ') return move = 4;
	if (board[cells[3]] == zero && board[cells[3]] == board[cells[4]] && board[cells[5]] == ' ') return move = 5;
	if (board[cells[2]] == zero && board[cells[2]] == board[cells[8]] && board[cells[5]] == ' ') return move = 5;
	if (board[cells[0]] == zero && board[cells[0]] == board[cells[3]] && board[cells[6]] == ' ') return move = 6;
	if (board[cells[8]] == zero && board[cells[8]] == board[cells[7]] && board[cells[6]] == ' ') return move = 6;
	if (board[cells[2]] == zero && board[cells[2]] == board[cells[4]] && board[cells[6]] == ' ') return move = 6;
	if (board[cells[1]] == zero && board[cells[1]] == board[cells[4]] && board[cells[7]] == ' ') return move = 7;
	if (board[cells[6]] == zero && board[cells[6]] == board[cells[8]] && board[cells[7]] == ' ') return move = 7;
	if (board[cells[0]] == zero && board[cells[0]] == board[cells[4]] && board[cells[8]] == ' ') return move = 8;
	if (board[cells[2]] == zero && board[cells[2]] == board[cells[5]] && board[cells[8]] == ' ') return move = 8;
	if (board[cells[6]] == zero && board[cells[6]] == board[cells[7]] && board[cells[8]] == ' ') return move = 8;

	if (board[cells[0]] == cross && board[cells[8]] == ' ') return move = 8;
	if (board[cells[8]] == cross && board[cells[0]] == ' ') return move = 0;
	if (board[cells[2]] == cross && board[cells[6]] == ' ') return move = 6;
	if (board[cells[6]] == cross && board[cells[2]] == ' ') return move = 2;

	if (board[cells[6]] == cross && board[cells[6]] == board[cells[2]] && board[cells[8]] == ' ') return move = 8;
	if (board[cells[6]] == cross && board[cells[6]] == board[cells[2]] && board[cells[0]] == ' ') return move = 0;
	if (board[cells[0]] == cross && board[cells[0]] == board[cells[8]] && board[cells[6]] == ' ') return move = 6;
	if (board[cells[0]] == cross && board[cells[0]] == board[cells[8]] && board[cells[2]] == ' ') return move = 2;
	if (board[cells[4]] == ' ') return move = 4;
	




	return -1;
}

int compTurnIfSecond()
{
	int noMistake = 1;
	int move;
	if (level != 4)
	{
		srand(time(nullptr));
		
		switch (level)
		{
		case 1:
			noMistake = rand() % 4;
		case 2: 
			noMistake = rand() % 10;
		case 3:
			noMistake = rand() % 15;
		}
	}
	if (noMistake)
	{
		move = botLogicIfSecond();
		if (move != -1) return move;
	}
	
	else
	{
		do
		{
			srand(time(nullptr));
			move = rand() % 9;
		} while (board[cells[move]] != ' ');
		return move;
	}
}


int compTurnIfFirst()
{
	int move;
	int noMistake = 1;
	if (level != 4)
	{
		srand(time(nullptr));

		switch (level)
		{
		case 1:
			noMistake = rand() % 3;
		case 2:
			noMistake = rand() % 8;
		case 3:
			noMistake = rand() % 12;
		}
	}
	if (noMistake)
	{
		move = botLogicIfFirst();
		if (move != -1) return move;
	}

	else
	{
		srand(time(nullptr));
		do
		{
			move = rand() % 9;
		} while (board[cells[move]] != ' ');
		return move;
	}
}

void compThink()
{
	int count = 0;
	std::cout << "computer thinking: ";
	while (count != 20)
	{
		std::cout << "#";
		Sleep(90);
		count++;
	}
	std::cout << "\n\n\n";
}
