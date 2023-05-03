#include "main.h"

/**
 * int _strlen - takes a string
 * returns the value of the length of that string
 * @strlen: string who's value is to be taken and returned
 * Return: length
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
