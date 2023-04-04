#include "main.h"
/**
 *print_chessboard -  function prints the chessboard
 *@a: main - check the code
 *Return: always 0
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int o;

	for (i = 0; i < 8; i++)
	{
		for (o = 0; 0 < 9; o++)
			_putchar(a[i][o]);
		_putchar('\n');
	}
}
