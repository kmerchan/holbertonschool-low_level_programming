/**
 * string_toupper - changes all lowercase letters in string to uppercase
 * @s: input string
 *
 * Return: pointer to new string will uppercase letter
 */

char *string_toupper(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
		i++;
	}
	return (s);
}
