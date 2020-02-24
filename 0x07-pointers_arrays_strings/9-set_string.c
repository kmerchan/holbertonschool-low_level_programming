/**
 * set_string - sets the value of a pointer to a character
 * @s: input pointer to pointer to character
 *
 * @to: input pointer to character
 *
 */

void set_string(char **s, char *to)
{
	*s = &(*to);
}
