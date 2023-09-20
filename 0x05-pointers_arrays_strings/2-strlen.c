#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to be examine
 *
 * Return: the string length
 */
int _strlen(char *s)
{
	int x;

	x = 0;

	while (*s != '\0')
	{
		x++;
		s++;
	}

	return (x);
}
