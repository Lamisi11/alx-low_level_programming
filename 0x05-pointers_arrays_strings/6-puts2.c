#include "main.h"

/**
 * put2 - function which prints every other character of a string
 *  followed by a new line
 *  @s: String to be operated on
 *  Return: print value
 */
void puts2(char *str)
{
	int longi = 0;
	int a = 0;
	char *c = str;
	int b;

	while (*c != '\0')
	{
		c++;
		longi++;
	}
	a = longi - 1;
	for (b = 0 ; b <= a ; b++)
	{
		if (b % 2 == 0)
	{
		_putchar(str[b]);
	}
	}
	_putchar('\n');
}
