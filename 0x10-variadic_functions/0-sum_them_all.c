#include <stdarg.h>

/**
 * sum_them_all - returns sum of all parameters
 * @n: input integers
 *
 * Return: sum of all arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list arguments;
	unsigned int i = 0;
	int sum = 0;

	if (n == 0)
		return (0);
	va_start(arguments, n);
	for (i = 0; i < n; i++)
		sum += va_arg(arguments, int);
	va_end(arguments);
	return (sum);
}
