#include "holberton.h"

/**
 * print_chessboard - function will print chessboard
 * @a: array of chessboard pieces
 *
 */

void print_chessboard(char (*a)[8])
{
	int rows = 0;
	int columns = 0;

	for (rows = 0; rows < 8; rows++)
	{
		for (columns = 0; columns < 8; columns++)
		{
			_putchar(a[rows][columns]);
		}
/* ASCII value for newline is 10*/
		_putchar(10);
	}
}
