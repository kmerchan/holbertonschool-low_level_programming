#define NULL 0

/**
 * _strchr - finds character in a string and returns address of that character
 * @s: input pointer to string of characters
 *
 * @c: input character to find
 *
 * Return: pointer to first occurance of char c in string or null if no char c
 */

char *_strchr(char *s, char c)
{
	for (;; s++)
	{
		if (*s == c)
		{
			return (s);
		}
		else if (*s == c && c == NULL)
			return(s);
		else if (*s == NULL)
			break;
	}
	return (NULL);
}
