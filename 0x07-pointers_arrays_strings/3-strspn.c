#include "main.h"

/**
 * *_strspn - gets the length of a prefix substring
 * @s: string to evaluate
 * @accept: string containing the list
 *
 * Return: the number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int j, i, index;

	int f = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		index = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				f++;
				index = 1;
			}
		}
		if (index == 0)
		{
			return (f);
		}
	}

	return (0);
}
