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

	if (s[i] >= 'a' && s[i] <= 'z')
	{
		s[i] = s[i] - 32;
	}
	while (s[i] != '\0')
	{
		if (s[i] == ' ' || s[i] == '.' || s[i] == '\t' || s[i] == '\n'
			|| s[i] == '?' || s[i] == '!' || s[i] == ',' ||
			s[i] == '(' || s[i] == ')' || s[i] == '{' || s[i] == '}'
		    || s[i] == ';' || s[i] == '"')
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
