/**
 * print_name - function that prints a name
 * @name: input string containing name
 * @f: pointer to function with input string
 *
 */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}