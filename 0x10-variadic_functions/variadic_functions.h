#ifndef VARIADIC_H
#define VARIADIC_H

#include <stdarg.h>

/**
 * struct formatting - structure to match type character with format func
 * @c: character of type
 *
 * @func: name of function to call
 *
 */

typedef struct formatting
{
	char *c;
	void (*func)();
} frmt;

/* declaration of function to sum all arguments (0)*/
int sum_them_all(const unsigned int n, ...);

/* declaration of function to print all num args with separator (1)*/
void print_numbers(const char *separator, const unsigned int n, ...);

/* declaration of function to print all string args with separator (2)*/
void print_strings(const char *separator, const unsigned int n, ...);

/* declaration of function to print all arguments of varying types (3)*/
void print_all(const char * const format, ...);

/* declaration of functions to print with formatting */
void printc(va_list args);
void printi(va_list args);
void printft(va_list args);
void prints(va_list args);

#endif
