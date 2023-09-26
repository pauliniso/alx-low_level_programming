#include "main.h"
#include <stdio.h>

/**
 * *_strchr - function that locates a character in a string
 * @s: string to search for
 * @c: char to find in the string
 *
 * Return: a pointer to the first occurrence
 * c in the string s, or NULL if the charact
 */
char *_strchr(char *s, char c)
{
		int p;

		while (1)
		{
			p = *s++;
			if (p == c)
			{
				return (s - 1);
			}
			if (p == 0)
			{
				return (NULL);
			}
		}
}
