#include "main.c"

/**
 * _strcat - function to concatenate strings
 * @dest: character to input
 * @src: target destination
 *
 * Return: no value
 */

char *_strcat(char *dest, char *src)
{
	int p = 0;
	int i = 0;

	while (dest[i] != '\0')
		i++;

	while (src[p] != '\0')
	{
	dest[i] = src[p];
		p++;
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
