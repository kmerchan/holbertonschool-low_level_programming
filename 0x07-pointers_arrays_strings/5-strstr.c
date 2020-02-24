/**
 * _strstr - finds matching set of bytes of one substring in another string
 * @haystack: input pointer to string of characters to check
 *
 * @needle: input pointer to substring of characters to look for
 *
 * Return: pointer to location of substring or null if substring not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;
	int size = 0;
	int x = 0;

	for (j = 0; needle[j] != '\0'; j++)
	{
		size++;
	}
	if (size == 0)
	{
		return (haystack);
	}
	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			x = 0;
			while (x < size && haystack[i + x] == needle[x])
			{
				if (x == (size - 1))
				{
					return (&haystack[i]);
				}
				x++;
			}
		}
	}
	if (haystack[i] == '\0' && needle[x] == '\0')
	{
		return (&haystack[i]);
	}
	else
	{
		return ('\0');
	}
}
