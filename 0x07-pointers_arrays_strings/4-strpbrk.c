/**
 * _strpbrk - finds first occurance of any of a set of bytes in string
 * @s: input pointer to string to check
 *
 * @accept: input pointer to string of bytes to check against
 *
 * Return: first occurance of set of bytes in string
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j = 0;

	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
		i++;
	}
	return ('\0');
}
