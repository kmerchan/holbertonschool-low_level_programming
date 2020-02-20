/**
 * _strncpy - copies src string up to n bytes to dest string
 * @src: input source string to copy to dest
 *
 * @dest: input destination string to copy to
 *
 * @n: input number of bytes to append
 *
 * Return: pointer to resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
