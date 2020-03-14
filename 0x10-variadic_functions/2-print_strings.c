#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_strings - prints all strings passed as arg with separator
 * @separator: input string to separate printed numbers
 *
 * @n: input number of strings
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;
	char *string;

	if (n <= 0)
	{
		printf("\n");
		return;
	}
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(args, char *);
		if (string == NULL)
			string = "(nil)";
		if (i != (n - 1))
		{
			printf("%s", string);
			if (separator != NULL)
				printf("%s", separator);
		}
		else
			printf("%s\n", string);
	}
	va_end(args);
}
