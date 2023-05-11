#include "main.h"

/**
 * _puts_recursion - program prints a string followed by a line
 * @s: string to be operated on
 * Return: Always 0 (Success)
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}
