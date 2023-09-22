#include "main.h"

/**
 * print_number - function that prints an integer
 * @n: number of integer to be printed
 */
void print_number(int n)
{
	unsigned int p;

	p = n;

	if (n < 0)
	{
		_putchar('-');
		p = -n;
	}
	if (p / 10 != 0)
	{
		print_number(p / 10);
	}
	_putchar((p % 10) + '0');
}
