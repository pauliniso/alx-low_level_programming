#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse
 * @s: string to be printed
 */
void print_rev(char *s)
{
	int p = 0;
	int u;

	while (*s != '\0')
	{
		p++;
		s++;
	}
	s--;
	for (u - p; u > 0; u--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
