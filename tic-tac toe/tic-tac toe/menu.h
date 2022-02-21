#pragma once
#include "variables.h"

void setLevel()
{
	while (true)
	{
		std::string getLevel;
		std::cout << "Choose dificulty level of computer player:\n"
			<< "1 - novice\n"
			<< "2 - medium\n"
			<< "3 - hard\n"
			<< "4 - perfect play\n";
		std::cin >> getLevel;
		if (getLevel.length() != 1 || getLevel[0] < 49 || getLevel[0] > 52)
		{
			std::cout << "Incorrect input!";
			Sleep(2000);
			system("cls");
			continue;
		}
		level = getLevel[0] - '0';
		break;
		
	}
}

void showLevel(int level)
{
	switch (level)
	{
	case 1:
		std::cout << "OK, You choosed novice";
		break;
	case 2:
		std::cout << "OK, You choosed medium";
		break;
	case 3:
		std::cout << "OK, You choosed hard";
		break;
	case 4:
		std::cout << "OK, You choosed perfect play";
		break;
	}
}
void menu()
{
	std::cout << "\t\t\tWell, it is a tic-tac toe! You must insert crosses or zeros\n"
		<< "\t\t\tin squeres on the board 3X3 by entering coordinates (\"1,1\" for example)\n"
		<< "\t\t\twhere first coordinate means row, you want to insert sign and second\n"
		<< "\t\t\tmeans column. Your mission is line up your three signs in a row, column\n"
		<< "\t\t\tor diagonal. At the same time you mustn't give your opponent do same.\n"
		<< "\t\t\tGOOD LUCK!\n";
}