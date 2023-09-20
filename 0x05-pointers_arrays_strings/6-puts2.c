#include "main.h"

/**
 * puts2 - function to print one char
 * starting with the first one
 * @str: string to print the chars from
 * Return: output
 */
void puts2(char *str)
{
	int x = 0;
	int y = 0;
	char *z = str;
	int r;

	while (*z != '\0')
	{
		z++;
		x++;
	}
	y = x - 1;
	for (r = 0; r <= y; r++)
	{
		if (r % 2 == 0)
		{
		_putchar(str[r]);
		}
	}
	_putchar('\n');
}
