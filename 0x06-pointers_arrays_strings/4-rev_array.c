#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers.
 * @a:  array of integers
 * @n: number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int p, x;

	for (x = 0; x < n--; x++)
	{
		p = a[x];
		a[x] = a[n];
		a[n] = p;
	}
}
