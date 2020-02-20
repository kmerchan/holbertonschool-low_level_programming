/**
 * _strncat - concatenates strings/appends src string to dest string up to n
 * @src: input source string to append to dest
 *
 * @dest: input destination string to append to
 *
 * @n: input number of bytes to append
 *
 * Return: pointer to resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
