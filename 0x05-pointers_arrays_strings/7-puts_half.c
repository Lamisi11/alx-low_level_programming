#include "main.h"

/**
 * puts_half - this function takes a string
 * and prints half of it
 * @str: String to be operated on
 * Return: Half of string.
 */
void puts_half(char *str)
{
	int i, a, longi;

	longi = 0;

	for (i = 0; str[i] != '\0'; i++)
		longi++;

	a = (longi / 2);

	if ((longi % 2) == 1)
		a = ((longi + 1) / 2);

	for (i = a; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
