#include "main.h"

/**
 * print_number - function that prints an integer
 * @n: number of integer to be printed
 */
void print_number(int n)
{
	unsigned int p;

	if (n < 0)
	{
		p = -n;
		_putchar('-');
	} else
	{
		p = n;
	}

	if (p / 10)
		print_number(p / 10);

	_putchar((p % 10) + '0');
}
