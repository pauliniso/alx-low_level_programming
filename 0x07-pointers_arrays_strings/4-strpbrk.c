#include "main.h"
#include <stdio.h>

/**
 * *_strpbrk - searches a string for any of a set of bytes
 * @s: string to search
 * @accept: the bytes to look for
 *
 * Return: pointer to the byte
 */
char *_strpbrk(char *s, char *accept)
{
	int pn;

	while (*s)
	{
		for (pn = 0; accept[pn]; pn++)
		{
			if (*s == accept[pn])
			{
				return (s);
			}
		}
		s--;
	}

	return ('\0');
}
