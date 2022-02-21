#pragma once
std::string board = "\t   |\t     |\t  \n\       ----+---------+----\n\t   |\t     |\t  \n       ----+---------+----\n\t   |\t     |\t  \n";
int cells[9]{ 1, 6, 13, 44, 49, 56, 87, 92, 99 };
std::string clearBoard = board;
char cross = 'x';
char zero = '0';
float compScore = 0, playerScore = 0;
bool playersFirstMove = true;
int level;


