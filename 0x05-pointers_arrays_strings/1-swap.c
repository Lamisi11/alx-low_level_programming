#include "main.h"

/**
 * swap_int - takes the values of two integers a and b
 * swaps the values of those two integers
 * @a: int a to be swapped
 * @b: int b to be swapped
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
