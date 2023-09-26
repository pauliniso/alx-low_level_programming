#include <stdio.h>
#include "main.h"

/**
 * print_diagsums -the function to prints the sum of the two diagonals
 * @a: square matrix
 * @size: size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int i;

	unsigned int d, sum;

	sum = 0;
	d = 0;

	for (i = 0; i < size; i++)
	{
		sum += a[(size * i) + i];
		d += a[(size * (i + 1)) - (i + 1)];
	}

	printf("%d, %d\n", sum, d);
}
