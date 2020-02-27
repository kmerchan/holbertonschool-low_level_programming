/* declaration of _putchar function*/
int _putchar(char c);

/* declaration of function to print string without loops (0)*/
void _puts_recursion(char *s);

/* declaration of function to print string in reverse (1)*/
void _print_rev_recursion(char *s);

/* declaration of function to return length of string (2)*/
int _strlen_recursion(char *s);

/* declaration of function to return factorial of number (3)*/
int factorial(int n);

/* declaration of function to return value of x raised to the power of y (4)*/
int _pow_recursion(int x, int y);

/* declaration of function to return natural square root of a number (5)*/
int _sqrt_recursion(int n);

/*declaration of subfunction to recursive check if divisible by range of int */
int square_root_recursion(int n, int guess);

/* declaration of function to determine if a number is prime (6)*/
int is_prime_number(int n);

/* declaration of subfunction to determine count of recursion (6)*/
int counter(int n, int count);

/* declaration of function to determine if a string is a palindrome (7)*/
int is_palindrome(char *s);

/* declaration of subfunction to determine string length (7)*/
int stringlength(char *s, int count);

/* declaration of subfunction to determine if characters match (7)*/
int matching(char *s, int end);

/* declaration of function to compare two strings, accounting for wildcards(8)*/
int wildcmp(char *s1, char *s2);

/* declaration of function to compare two strings (8)*/
int stringcmp(char *s1, char *s2, int checker);

/* declaration of subfunction to move s2 past wildcards (8)*/
char *wilds2(char *s2);

/* declaration of subfunction to move s1 to next character of s2 after * (8)*/
char *wilds1(char *s1, char next);

/* declaration of subfunction to check for previous wildcards and move strings*/
int checkwd(char *s2, int count);
