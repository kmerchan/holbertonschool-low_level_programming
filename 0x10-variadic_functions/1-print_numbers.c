#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints all numbers passed as arg with separator
 * @separator: input string to separate printed numbers
 *
 * @n: input integers
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;

	if (n <= 0)
	{
		printf("\n");
		return;
	}
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
		{
			printf("%d", va_arg(args, int));
			if (separator != NULL)
				printf("%s", separator);
		}
		else
			printf("%d\n", va_arg(args, int));
	}
	va_end(args);
}
