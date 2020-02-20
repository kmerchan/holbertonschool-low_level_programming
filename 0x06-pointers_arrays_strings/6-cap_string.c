/**
 * cap_string - capitalizes all words of string
 * @s: input string
 *
 * Return: pointer to new string will all capitalized words
 */

char *cap_string(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		if ((s[i] == ' ' || s[i] == '.') || (s[i] == 9 || s[i] == 10))
		{
			if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
			{
				s[i + 1] = s[i + 1] - 32;
			}
		}
		i++;
	}
	return (s);
}
