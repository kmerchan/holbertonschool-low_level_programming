#ifndef HOLBERTON_H
#define HOLBERTON_H

/* declaration of function to allocate specified size of memory (0)*/
void *malloc_checked(unsigned int b);

/* declaration of function to point to concatenated strings up to n bytes (1)*/
char *string_nconcat(char *s1, char *s2, unsigned int n);

/* declaration of subfunction to find string length (1)*/
unsigned int _strlen(char *s);

/* declaration of function to allocate memory for an array and set to 0 (2)*/
void *_calloc(unsigned int nmemb, unsigned int size);

#endif
