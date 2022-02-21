#include "handler.h"
#include "input.h"
#include "check.h"
#include "output.h"

int main()
{
	try
	{
		getCoordinates();
	}
	catch (int exeption)
	{
		switch (exeption)
		{
		case -1:
			printf("\x1b[31mincorrect coordinates are entered\x1b[0m");
			return -1;
		case -2:
			printf("\x1b[31mincorrect input length\x1b[0m");
			return -2;
		}
	}
	system("cls");
	initBoard(board);
	knightMove(startpositionX, startpositionY);
	displayBoard(board);
	printf("\nitterations: %d\n", itterations);
	printf("\nroute of the knight:\n%s\n", moves(board).c_str());
	system("pause");
}

