#include "main.h"

/**
 * *_strcpy - the string pointed to by src
 * @dest: pointer to the buffer
 * @src: string
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int pn = 0;
	int i = 0;

	while (*(src + 1) != '\0')
	{
		pn++;
	}

	for ( ; i < pn; i++)
	{
		dest[i] = src[i];
	}
	dest[pn] = '\0';

	return (dest);
}
