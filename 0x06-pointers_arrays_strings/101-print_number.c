#include "main.h"

/**
 * print_number - function that prints an integer
 * @n: number of integer to be printed
 *
 * Return: no value
 */

void print_number(int n)
{
	if (n < 0)
	{
		putchar('-');
		n = -n;
	}
	if (n / 10)
		print(n / 10);

	putchar(n % 10 + '0');
}
