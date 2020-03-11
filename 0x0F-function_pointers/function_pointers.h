#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

/* declaration of function to use function pointer to print name (0)*/
void print_name(char *name, void (*f)(char *));

/* declaration of function to execute function for each element of array(1)*/
void array_iterator(int *array, size_t size, void (*action)(int));

/* declaration of function to search for an integer (2)*/
int int_index(int *array, int size, int (*cmp)(int));

#endif
