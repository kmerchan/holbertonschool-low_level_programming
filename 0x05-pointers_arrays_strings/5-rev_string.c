#include "holberton.h"

/**
 * rev_string - function to reverse string
 * @s: input string
 *
 * @*s: input pointer character string s
 *
 */

void rev_string(char *s)
{
	int i, size = 0;

	for (i = 0; s[i] != 0; i++)
	{
		size++;
	}
	int start;
	int end = size - 1;
	char holder;

	for (start = 0; start < (size / 2); start++)
	{
		holder = s[start];
		s[start] = s[end];
		s[end] = holder;
		end--;
	}
}
