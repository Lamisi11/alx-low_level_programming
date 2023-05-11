#include "main.h"

/**
 * _pow_recursion - raises x to a power y
 * @x: value tobe operated upon
 * @y: power to raise value to
 *
 * Return: Result
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
