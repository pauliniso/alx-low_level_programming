#include "main.h"

/**
 * cap_string - a function that capitalizes all words of a string
 * @s: string of word
 *
 * Return: the result
 */
char *cap_string(char *s)
{
	int sepr = 0;

	while (s[sepr])
	{
		while (!(s[sepr] >= 'a' && s[sepr] <= 'z'))
			sepr++;

		if (s[sepr - 1] == ' ' ||
		s[sepr - 1] == '\t' ||
		s[sepr - 1] == '\n' ||
		s[sepr - 1] == ',' ||
		s[sepr - 1] == ';' ||
		s[sepr - 1] == '.' ||
		s[sepr - 1] == '!' ||
		s[sepr - 1] == '?' ||
		s[sepr - 1] == '"' ||
		s[sepr - 1] == '(' ||
		s[sepr - 1] == ')' ||
		s[sepr - 1] == '{' ||
		s[sepr - 1] == '}' ||
		sepr == 0)
			s[sepr] -= 32;
		sepr++;
	}
	return (s);
}
