#include "main.h"

/**
 * _strlen - takes a string
 * returns the value of the length of that string
 * @s: string to be returned
 * Return: length of string
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}

	return (longi);

}
