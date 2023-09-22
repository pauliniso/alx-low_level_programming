#include "main.h"

/**
 * rot13 -encodes a string using rot13
 * @s: encoded string
 *
 * Return: a string
 */
char *rot13(char *s)
{
	int i, j;

	char d_set1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char d_set2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; a[j] != '\0'; j++)
		{
			if (s[i] == d_set1[j])
			{
				s[i] = d_set2[j];
				break;
			}
		}
	}

	return (s);
}
