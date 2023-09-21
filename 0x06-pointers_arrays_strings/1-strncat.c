#include "main.h"
/**
 * _strncat - a function that concatenates two strings
 * @dest: destination
 * @src: source string
 * @n: number of bytes
 *
 * Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int i = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	while (i < n && src[i] != '\0')
	{
		dest[a] = src[i];
		i++;
		a++;
	}
	dest[a] = '\0';
	return (dest);
}
