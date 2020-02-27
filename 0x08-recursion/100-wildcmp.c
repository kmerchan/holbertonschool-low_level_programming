#include "holberton.h"

/**
 * wildcmp - compares two strings, accounting for wildcard characters
 * @s1: input string 1
 *
 * @s2: input string 2, can contain wildcards
 *
 * Return: 1 if strings are identical, 0 if not
 */

int wildcmp(char *s1, char *s2)
{
	if (s2[0] == '*')
	{
		s2 = wilds2(s2);
		s1 = wilds1(s1, s2[0]);
		return (wildcmp(s1, s2));
	}
	else if (s1[0] != s2[0])
	{
		return (0);
	}
	else if (s1[0] == '\0' && s2[0] == '\0')
	{
		return (1);
	}
	else
	{
		s1++;
		s2++;
		return (wildcmp(s1, s2));
	}
	return (0);
}

/**
 * wilds2 - function to handle wildcards in string 2
 * @s2: input string s2
 *
 * Return: start of next character of s2
 */

char *wilds2(char *s2)
{
	if (s2[0] != '*')
	{
		return (s2);
	}
	else
	{
		s2++;
		return (wilds2(s2));
	}
	return (0);
}

/**
 * wilds1 - function to move s1 to account for  wildcards in string 2
 * @s1: input string s1
 *
 * @next: input of what next character of s2 is
 * Return: start of next character of s1
 */

char *wilds1(char *s1, char next)
{
	if (s1[0] == next)
	{
		return (s1);
	}
	else
	{
		s1++;
		return (wilds1(s1, next));
	}
	return (0);
}
