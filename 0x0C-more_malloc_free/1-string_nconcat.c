#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - takes two strings and concatenates them
 * @a: appendded string
 * @b: concatenated string
 * @n: number of bytes to concatenate to s1 from s2
 * Return: pointer to the result
 */

char *string_nconcat(char *a, char *b, unsigned int n)
{
	char *s;
	unsigned int x = 0, y = 0, len1 = 0, len2 = 0;

	while (a && a[len1])
		len1++;
	while (b && b[len2])
		len2++;

	if (n < len2)
		s = malloc(sizeof(char) * (len1 + n + 1));
	else
		s = malloc(sizeof(char) * (len1 + len2 + 1));

	if (!s)
		return (NULL);

	while (x < len1)
	{
		s[x] = a[x];
		x++;
	}

	while (n < len2 && x < (len1 + n))
		s[x++] = b[y++];

	while (n >= len2 && x < (len1 + len2))
		s[x++] = b[y++];
	s[x] = '\0';

	return (s);
}
