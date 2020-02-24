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
	unsigned int i;
	unsigned int j, k, m;

	m = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				k++;
				break;
			}
			else
				k = 0;
		}
		if (k == 0)
		{
			break;
		}
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				m++;
				break;
			}
		}
	}
	return (m);
}
