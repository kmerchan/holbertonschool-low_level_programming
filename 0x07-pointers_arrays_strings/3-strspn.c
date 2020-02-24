/**
 * _strspn - finds number of bytes from start that consist of only given bytes
 * @s: input pointer to string to check
 *
 * @accept: input pointer to string of bytes to check against
 *
 * Return: number of bytes of first string that match acceptable bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	int size = 0;
	unsigned int count = 0;

	for (j = 0; accept[j] != '\0'; j++)
	{
		size++;
	}
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
			else if (j == (size - 1) && s[i] != accept[j])
			{
				return (count);
			}
		}
	}
	return (count);
}
