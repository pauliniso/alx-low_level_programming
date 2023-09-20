#include "main.h"

/**
 * _puts - function to prints a string to stdout
 * @str: the string to be printed
 */
void _puts(char *str)
{
	int i;

	while (str[i] != '\0')
	{
		_putchar(i++);
	}
	_putchar('\n');
}
