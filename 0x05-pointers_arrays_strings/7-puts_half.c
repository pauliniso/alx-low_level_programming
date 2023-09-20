#include "main.h"

/**
 * puts_half - printing half of a string,
 * followed by a new line
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int n, i;
	int p = 0;

	while (str[p] != '\0')
	{
		p++;
	}
	if (p % 2 == 0)
	{
		for (i = p / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	} else if (p % 2)
	{
		for (n = (p - 1) / 2; n < p - 1; n++)
		{
			_putchar(str[n + 1]);
		}
	}
	_putchar('\n');
}
