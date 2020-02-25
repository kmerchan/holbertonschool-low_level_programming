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

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			s = s + i;
			return (s);
		}
	}

	if (c == '\0')
		s = s + i;
	else
		s = 0;
	return (s);
}
