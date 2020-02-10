#include "holberton.h"

/**
 * main - Entry point
 * function will print Holberton
 * Return: Always 0 (Success)
 */

int main(void)
{
	/* Create array of characters to spell Holberton */
	char array[10] = "Holberton";
	int index;

	/* Loop through array to print full string */
	while (index < 10)
	{
		_putchar(array[index]);
		index++;
	}
	/* Print new line character after Holberton */
	_putchar(10);
	return (0);
}
