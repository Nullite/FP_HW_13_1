#pragma once
#include "variables.h"

bool isPartyOver()
{
	if (board[cells[0]] != ' ' && board[cells[0]] == board[cells[1]] && board[cells[0]] == board[cells[2]])
		return true;
	if (board[cells[3]] != ' ' && board[cells[3]] == board[cells[4]] && board[cells[3]] == board[cells[5]])
		return true;
	if (board[cells[6]] != ' ' && board[cells[6]] == board[cells[7]] && board[cells[6]] == board[cells[8]])
		return true;
	if (board[cells[1]] != ' ' && board[cells[1]] == board[cells[4]] && board[cells[1]] == board[cells[7]])
		return true;
	if (board[cells[2]] != ' ' && board[cells[2]] == board[cells[5]] && board[cells[2]] == board[cells[8]])
		return true;
	if (board[cells[0]] != ' ' && board[cells[0]] == board[cells[4]] && board[cells[0]] == board[cells[8]])
		return true;
	if (board[cells[2]] != ' ' && board[cells[2]] == board[cells[4]] && board[cells[2]] == board[cells[6]])
		return true;
	if (board[cells[0]] != ' ' && board[cells[0]] == board[cells[3]] && board[cells[0]] == board[cells[6]])
		return true;
	
		return false;

}
