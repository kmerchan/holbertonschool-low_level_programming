/**
 * leet - encodes string into leet
 * @s: input string
 *
 * Return: pointer to new encoded string
 */

char *leet(char *s)
{
	int i, j;
	char array[] = "AEOTL43071";

	i = 0;

	while (s[i] != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == array[j] || (s[i] - 32) == array[j])
			{
				s[i] = array[j + 5];
			}
		}
		i++;
	}
	return (s);
}
