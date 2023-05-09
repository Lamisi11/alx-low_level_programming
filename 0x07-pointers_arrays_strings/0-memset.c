#include "main.h"

/**
 * _memset - occupies the  memory with a constant byte.
 * @a: starting address of the memory
 * @f: final value
 * @n: number of bytes we want to change
 * Return: new array with new value
 */
char *_memset(char *a, char f, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		a[i] = f;
		n--;
	}
	return (a);
}
