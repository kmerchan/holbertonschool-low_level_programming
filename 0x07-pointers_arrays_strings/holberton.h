/* declaration for _putchar function*/
int _putchar(char c);

/* declaration of function to fill memory with constant byte (0)*/
char *_memset(char *s, char b, unsigned int n);

/* declaration of function to copy n bytes of memory from src to dest (1)*/
char *_memcpy(char *dest, char *src, unsigned int n);

/* declaration of function to locate character in a string (2)*/
char *_strchr(char *s, char c);

/* declaration of function to return number of bytes in string that match (3)*/
unsigned int _strspn(char *s, char *accept);

/* declaration of function to return bytes of string that match (4)*/
char *_strpbrk(char *s, char *accept);

/* declaration of function to locate a substring (5)*/
char *_strstr(char *haystack, char *needle);

/*declaration of function to print a chessboard (6)*/
void print_chessboard(char (*a)[8]);

/* declaration of function to print the sum of two diagonals of a square (7)*/
void print_diagsums(int *a, int size);

/* declaration of funciton to set the value of a pointer to a char (8)*/
void set_string(char **s, char *to);
