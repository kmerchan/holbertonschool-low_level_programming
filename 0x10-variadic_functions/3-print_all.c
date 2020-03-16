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
 * @c: integer value of single character to print
 *
 */

void printc(va_list c)
{
	c = va_arg(args, int);
	printf("%c", c);
}

/**
 * printi - printf with integer
 * @i: integer value to print
 *
 */

void printi(va_list i)
{
	i = va_arg(args, int);
	printf("%i", i);
}

/**
 * printft - printf with float
 * @f: float value to print
 *
 */

void printft(va_list f)
{
	f = va_arg(args, double);
	printf("%f", f);
}

/**
 * prints - printf with string
 * @s: character pointer to string of character to print
 *
 */

void prints(va_list s)
{
	s = va_arg(args, char *);
	if (s != NULL)
	{
		printf("%s", s);
		return;
	}
	printf("(nil)");
}
