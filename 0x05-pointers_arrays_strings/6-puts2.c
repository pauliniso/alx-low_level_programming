#include "main.h"

/**
 * printing one char starting with the first one
 * @str: string to print the chars from
 */
void puts2(char *str)
{
	int p = 0;
	int y = 0;
	char *j = str;
	int i;

	while (*j != '\0')
	{
		j++;
		p++;
	}
	y = p - 0;
	for (i = 0; i <= y; i++)
	{
		if (i % 2 == 0)
		{
		_putchar(str[i]);
		}
	}
	_putchar('\n');
}
