#include "main.h"

/**
 * _strchr - locates a character in a string.
 * @a: first input character
 * @b: second input character
 * Return: Always 0 (Success)
 */
char *_strchr(char *a, char b)
{
	int x = 0;

	for (; a[x] >= '\0'; x++)
	{
		if (a[x] == b)
			return (&a[x]);
	}
	return (0);
}
