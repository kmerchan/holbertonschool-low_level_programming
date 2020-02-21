/* declaration of given _putchar.c function */
int _putchar(char c);

/* declaration of function to append src string to dest string (0)*/
char *_strcat(char *dest, char *src);

/* declaration of function to append n bytes of to src to dest string (1)*/
char *_strncat(char *dest, char *src, int n);

/* declaration of function that copies string up to n bytes (2)*/
char *_strncpy(char *dest, char *src, int n);

/* declaration of function that compares two strings (3)*/
int _strcmp(char *s1, char *s2);

/* declaration of function the reverses array of integers (4)*/
void reverse_array(int *a, int n);

/* declaration of function to change all lowercase to uppercase in string (5)*/
char *string_toupper(char *);

/* declaration of function that capitalizes each word in string (6)*/
char *cap_string(char *);

/* declaration of function to encode a string in leet/1337 (7)*/
char *leet(char *);

/* declaration of function that encodes a string in rot13 (8)*/
char *rot13(char *);

/* declaration of function to print integer (9)*/
void print_number(int n);

/* declaration of function to add two numbers (11)*/
char *infinite_add(char *n1, char *n2, char *r, int size_r);
