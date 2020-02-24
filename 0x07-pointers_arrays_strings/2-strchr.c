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
	int i = 0;

	while (s[i] != c && s[i] != '\0')
	{
		i++;
	}
	if (s[i] == '\0')
	{
		if (c == '\0')
		{
			return (&s[i]);
		}
		else
		{
			return ('\0');
		}
	}
	else
	{
		return (&s[i]);
	}
}
