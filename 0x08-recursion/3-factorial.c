#include "main.h"

/**
 * factorial - program returns the factorial of a given number
 * @n: number to be operated upon
 *
 * Return: factorial of number
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
