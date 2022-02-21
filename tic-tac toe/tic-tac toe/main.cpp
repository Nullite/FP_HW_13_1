#include "logic.h"
#include "menu.h"

int main()
{
	menu();
	system("pause");
	system("cls");
	setLevel();
	system("cls");
	showLevel(level);
	Sleep(2000);
	system("cls");
	Game();
}
