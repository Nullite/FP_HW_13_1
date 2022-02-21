#pragma once
#include <windows.h>
#include <iostream>
#include "variables.h"
#include "check.h"
#include "bot.h"
int playerTurn()
{
	std::string coords;
	int coordX;
	int coordY;
	bool moveDone = false;
	std::cout << "Enter your move coordinates:\n";
	while (!moveDone)
	{
		std::cin >> coords;
		if (coords.length() != 3)
		{
			std::cout << "incorrect input";
			Sleep(1000);
			system("cls");
			std::cout << board << "\n\n";
			std::cin.clear();
			continue;
		}
		if (coords[0] < 48 || coords[0] > 57 || coords[2] < 48 || coords[2] > 57)
		{
			std::cout << "incorrect input";
			Sleep(1000);
			system("cls");
			std::cout << board << "\n\n";
			std::cin.clear();
			continue;
		}
		if (coords[1] != 44)
		{
			std::cout << "incorrect input";
			Sleep(1000);
			system("cls");
			std::cout << board << "\n\n";
			std::cin.clear();
			continue;
		}
		moveDone = true;
	}
	coordX = coords[0] - '0';
	coordY = coords[2] - '0';
	
	switch (coordX)
	{
	case 1:
		return coordX + coordY - 2;
		
	case 2:
		return coordX + coordY;

	case 3:
		return coordX + coordY + 2;
	}
	return 0;
}

void gamePlayerMoveFirst()
{
	int playermove;
	int compMove;
	int moveCount = 0;
	int win = 0;
	while (moveCount != 5)
	{
		moveCount++;

		std::cout << board << "\n\n";

		if (isPartyOver())
		{
			win = -1;
			break;
		}
			

		playermove = cells[playerTurn()];
		if (board[playermove] == ' ')
			board[playermove] = cross;
		else
		{
			moveCount--;
			std::cout << "You try to insert cross into filled square.";
			Sleep(1000);
			system("cls");
			continue;

		}

		if (moveCount == 5)
			break;

		system("cls");

		if (isPartyOver())
		{
			win = 1;
			break;
		}
			

		std::cout << board << "\n\n";

		compMove = cells[compTurnIfSecond()];
		board[compMove] = zero;
		compThink();
		system("cls");
	}
	switch (win)
	{
	case 1:
		system("cls");
		std::cout << "\n\n\n\n\n\t\x1b[32mYou WIN the party!\x1b[0m\n\n";
		playerScore += 1;
		std::cout << board << "\n\n"
			<< "your score: " << playerScore << "\n"
			<< "computer score: " << compScore << "\n";
		system ("pause");
		system("cls");
		break;
	case -1:
		system("cls");
		std::cout << "\n\n\n\n\n\t\x1b[31mYou loose!\x1b[0m\n\n";
		compScore += 1;
		std::cout << board << "\n\n"
			<< "your score: " << playerScore << "\n"
			<< "computer score: " << compScore << "\n";
		system("pause");
		system("cls");
		break;
	default:
		system("cls");
		std::cout << "\n\n\n\n\n\t\x1b[31mIt is a DRAW!\x1b[0m\n\n";
		playerScore += 0.5;
		compScore += 0.5;
		std::cout << board << "\n\n"
			<< "your score: " << playerScore << "\n"
			<< "computer score: " << compScore << "\n";
		system("pause");
		system("cls");
		break;
	}

	board = clearBoard;
	return;
}

void gamePlayerMoveSecond()
{
	int playermove;
	int compMove;
	int moveCount = 0;
	int win = 0;
	while (moveCount != 5)
	{
		system("cls");
		moveCount++;

		std::cout << board << "\n\n";

		if (isPartyOver())
		{
			win = 1;
			break;
		}
		compMove = cells[compTurnIfFirst()];
		board[compMove] = cross;
		compThink();
		system("cls");
		std::cout << board << "\n\n";

		if (moveCount == 5)
			break;

		if (isPartyOver())
		{
			win = -1;
			break;
		}
		while (true)
		{
			playermove = cells[playerTurn()];
			if (board[playermove] == ' ')
			{
				board[playermove] = zero;
				break;
			}
				else
			{
				std::cout << "You try to insert cross into filled square.";
				Sleep(1000);
				system("cls");
				std::cout << board << "\n\n";
			}
		}
		system("cls");
	}
	switch (win)
	{
	case 1:
		system("cls");
		std::cout << "\n\n\n\n\n\t\x1b[32mYou WIN the party!\x1b[0m\n\n";
		playerScore += 1;
		std::cout << board << "\n\n"
			<< "your score: " << playerScore << "\n"
			<< "computer score: " << compScore << "\n";
		system("pause");
		system("cls");
		break;
	case -1:
		system("cls");
		std::cout << "\n\n\n\n\n\t\x1b[31mYou loose!\x1b[0m\n\n";
		compScore += 1;
		std::cout << board << "\n\n"
			<< "your score: " << playerScore << "\n"
			<< "computer score: " << compScore << "\n";
		system("pause");
		system("cls");
		break;
	default:
		system("cls");
		std::cout << "\n\n\n\n\n\t\x1b[31mIt is a DRAW!\x1b[0m\n\n";
		playerScore += 0.5;
		compScore += 0.5;
		std::cout << board << "\n\n"
			<< "your score: " << playerScore << "\n"
			<< "computer score: " << compScore << "\n";
		system("pause");
		system("cls");
		break;
	}

	board = clearBoard;
	return;
}


void Game()
{
	bool isGame = true;
	while (isGame)
	{
		char getContinue = 0;
		if (playersFirstMove) gamePlayerMoveFirst();
		else gamePlayerMoveSecond();
		while (true)
		{
			system("cls");
			std::cout << "Do you want to play again? y/n\t";
			std::cin >> getContinue;
			std::cin.clear();
			if (getContinue != 121 && getContinue != 110)
			{
				getContinue = 0;
				continue;
			}
				
			if (getContinue == 110)
			{
				isGame = false;
				break;
			}
			else
			{
				break;
			}
				
		}
		if (playersFirstMove)
			playersFirstMove = false;
		else
			playersFirstMove = true;
	}
}
		
