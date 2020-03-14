#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_all - prints all arguments passed, with separator
 * @format: input number of strings
 *
 */

void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	unsigned int j = 0;
	char *string;

	while (format[i])
		i++;
	va_start(args, i);
	while (j < i)
	{

	}
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
