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
	int array_index = 0;
	void (*cptr)(int) = &printc;
	void (*iptr)(int) = &printi;
	void (*ftptr)(int) = &printft;
	void (*sptr)(int) = &prints;
	char array[4][4];

	array = {
		{'c', cptr(va_arg(args, int))}
		{'i', iptr(va_arg(args, int))}
		{'f', ftptr(va_arg(args, double))}
		{'s', sptr(va_arg(args, char *))}
	};
	va_start(args, format);
	while (format[counter] != NULL)
	{
		while (array_index < 5)
		{
			if (format[counter] == array[array_index][0])
			{
				array[array_index][1];
				if (format[counter + 1] != NULL)
					printf(", ");
			}
			array_index++;
		}
		counter++;
	}
	va_end(args);
}

/**
 * printc - printf with character
 * @c: integer value of single character to print
 *
 */

void printc(int c);
{
	printf("%c", c);
}

/**
 * printi - printf with integer
 * @i: integer value to print
 *
 */

void printi(int i);
{
	printf("%i", i);
}

/**
 * printft - printf with float
 * @f: float value to print
 *
 */

void printft(double f);
{
	printf("%f", f);
}

/**
 * prints - printf with string
 * @s: character pointer to string of character to print
 *
 */

void prints(char *s);
{
	if (s != NULL)
	{
		printf("%s", s);
		return;
	}
	printf("(nil)");
}
