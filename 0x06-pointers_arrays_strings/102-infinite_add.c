#include "holberton.h"

/**
 * infinite_add - adds two numbers
 * @n1: first input number
 *
 * @n2: second input number
 *
 * @r: input buffer to return
 *
 * @size_r: size of buffer
 *
 * Return: pointer to buffer
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, size;

	size = 0;

	for (i = 0; n1[i] != 0 && n2[i] != 0; i++)
	{
		size++;
		r[i] = 0;
	}
	if (size > size_r)
	{
		return (0);
	}
	else
	{
		for (i = 0; n1[i] != 0 || n2[i] != 0; i++)
		{
			if ((n1[i] + n2[i]) > 9)
			{
				r[i] = r[i] + (n1[i] + n2[i]) % 10;
				r[i + 1] = r[i] + (n1[i] + n2[i]) / 10;
			}
			else
			{
				r[i] = r[i] + n1[i] + n2[i];
			}
		}
	}
	return (r);
}
