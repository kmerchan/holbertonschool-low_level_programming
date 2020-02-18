/**
 * swap_int - swaps tha values of two integers using pointers
 * @a: first input integer that *a points to
 *
 * @*a: first input pointer to an integer
 *
 * @b: second input integer that *b points to
 *
 * @*b: second input pointer to an integer
 *
 */

void swap_int(int *a, int *b)
{
	int holder;

	holder = *a;
	*a = *b;
	*b = holder;
}
