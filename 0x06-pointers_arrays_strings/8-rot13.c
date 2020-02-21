/**
 * rot13 - encodes string into rot13
 * @s: input string
 *
 * Return: pointer to new encoded string
 */

char *rot13(char *s)
{
	int i, j;
	char a[52] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

	char rot[52] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	i = 0;

	while (s[i] != '\0')
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == a[j])
			{
				s[i] = rot[j];
				break;
			}
		}
		i++;
	}
	return (s);
}
