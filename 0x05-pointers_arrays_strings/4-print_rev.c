#include "main.h"

/**
 * print_rev - takes a string, and reverses its value
 * and prints the result, followed by a new line
 * @s: String whose value is to be taken
 * return: 0
 */
void print_rev(char *s)
{
	int longi = 0;
	int a;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	s--;
	for (a = longi; a > 0; a--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
