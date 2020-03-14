#ifndef VARIADIC_H
#define VARIADIC_H

/* declaration of function to sum all arguments (0)*/
int sum_them_all(const unsigned int n, ...);

/* declaration of function to print all num args with separator (1)*/
void print_numbers(const char *separator, const unsigned int n, ...);

/* declaration of function to print all string args with separator (2)*/
void print_strings(const char *separator, const unsigned int n, ...);

/* declaration of function to print all arguments of varying types (3)*/
void print_all(const char * const format, ...);

#endif