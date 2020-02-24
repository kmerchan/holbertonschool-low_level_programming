/**
 * _memcpy - copies n bytes of memory of src to dest
 * @dest: input pointer to area of copied memory
 *
 * @src: input pointer to memory to be copied
 *
 * @n: inpiut number of bytes to copy
 *
 * Return: dest pointer to copied memory
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int num = +n;

	for (i = 0; i < num; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
