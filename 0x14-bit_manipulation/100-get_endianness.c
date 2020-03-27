#include "holberton.h"

/**
 * get_endianness - function to determine how system reads bits
 *
 * Return: 1 if little endian (read from lsb) or 0 if big endian (read from msb)
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *)&i;

	if (*c)
		return (1);
	return (0);
}
