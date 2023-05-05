#include "main.h"

/**
 * _strncpy - function takes and copies a given string
 * @dest: string to be copied
 * @src: string to be copied
 * @n: number
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
