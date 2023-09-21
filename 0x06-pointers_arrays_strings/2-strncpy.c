#include "main.h"

/**
 * _strncpy - a function that copies a string
 * @dest: destination
 * @src: source
 * @n: number of byte
 *
 * Return: pointer destination
 */

char *_strncpy(char *dest, char *src, int n)
{
	int p = 0;

	while (p < n && src[p] != '\0')
	{
		dest[p] = src[p];
		p++;
	}
	while (p < n)
	{
		dest[p] = '\0';
		p++;
	}

	return (dest);
}
