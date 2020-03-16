#include "variadic_functions.h"
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
	int counter = 0;
	int index = 0;

	frmt array[] = {
		{"c", printc},
		{"i", printi},
		{"f", printft},
		{"s", prints},
		{NULL, NULL}
	};

	char *separator = "";

	va_start(args, format);
	while (format != NULL && format[counter])
	{
		index = 0;
		while (array[index].c)
		{
			if (format[counter] == *(array[index].c))
			{
				printf("%s", separator);
				array[index].func(args);
				separator = ", ";
			}
			index++;
		}
		counter++;
	}
	printf("\n");
	va_end(args);
}

/**
 * printc - printf with character
 * @args: integer value of single character to print
 *
 */

void printc(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * printi - printf with integer
 * @args: integer value to print
 *
 */

void printi(va_list args)
{
	printf("%i", va_arg(args, int));
}

/**
 * printft - printf with float
 * @args: float value to print
 *
 */

void printft(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * prints - printf with string
 * @args: character pointer to string of character to print
 *
 */

void prints(va_list args)
{
	char *s = va_arg(args, char *);

	if (s != NULL)
	{
		printf("%s", s);
		return;
	}
	printf("(nil)");
}
