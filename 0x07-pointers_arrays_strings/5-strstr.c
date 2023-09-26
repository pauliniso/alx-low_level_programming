#include "main.h"
#include <stdio.h>

/**
 * *_strstr - function that locates a substring
 * @haystack: string to search
 * @needle: substring to be located
 *
 * Return: pointer to starting
 */
char *_strstr(char *haystack, char *needle)
{
	int i, index;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (index = 0; needle[index] != '\0'; index++)
		{
			if (haystack[i + index] != needle[index])
				break;
		}
		if (!needle[index])
			return (&haystack[i]);
	}
	return ('\0');
}
