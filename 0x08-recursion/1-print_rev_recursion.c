#include "main.h"

/**
 * _print_rev_recursion - Takes a string and prints it in reverse.
 * @s: The string to b operated upon.
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
