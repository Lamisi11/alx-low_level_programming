#include "main.h"

/**
 * _strstr - this locates a substring.
 * @haystack: first input
 * @needle: second input
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *c = haystack;
		char *b = needle;

		while (*c == *b && *b != '\0')
		{
			c++;
			b++;
		}

		if (*b == '\0')
			return (haystack);
	}

	return (0);
}
