/**
 * reverse_array - reverses an array of integers
 * @a: input array of integers
 *
 * @n: number of elements in array
 *
 */

void reverse_array(int *a, int n)
{
	int i, end, holder;

	end = n - 1;
	for (i = 0; i < (n / 2); i++, end--)
	{
		holder = a[i];
		a[i] = a[end];
		a[end] = holder;
	}
}
