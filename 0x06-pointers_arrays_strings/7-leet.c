#include "main.h"

/**
 * leet - function that encodes a string
 * @s: string of characters
 * Return: the result
 *
 */
char *leet(char *s)
{
	int y, x;

	char p[] = "aAeEoOtTlL";
	char n[] = "4433007711";

	for (y = 0; s[y] != '\0'; y++)
	{
		for (x = 0; x < 10; x++)
		{
			if (s[y] == p[x])
			{
				s[y] = n[x];
			}
		}
	}
	return (s);
}
