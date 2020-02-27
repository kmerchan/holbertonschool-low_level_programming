#include "holberton.h"

/**
 * is_palindrome - determines if string is a palindrome
 * @s: input string
 *
 * Return: 1 if palindrome and 0 if not
 */

int is_palindrome(char *s)
{
	int end;

	end = (stringlength(s, 0)) - 1;

	return (matching(s, end));
}

/**
 * stringlength - finds length of string
 * @s: input string
 *
 * @count: input counter
 *
 * Return: length of string/count
 */

int stringlength(char *s, int count)
{
	if (s[0 + count] != '\0')
	{
		count++;
		return (stringlength(s, count));
	}
	else
	{
		return (count);
	}
}

/**
 * matching - checks if start and end characters match each other
 * @s: input string to check
 *
 * @end: input index value for end of string
 *
 * Return: 1 if match, 0 if not palindrome
 */

int matching(char *s, int end)
{
	if (end <= 0)
	{
		return (1);
	}
	else if (s[0] != s[end])
	{
		return (0);
	}
	else
	{
		s++;
		end -= 2;
		return (matching(s, end));
	}
}
