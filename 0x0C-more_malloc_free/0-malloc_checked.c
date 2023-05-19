#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - function which uses malloc to allocate a memory
 * @x: number of bytes to be operated on
 * Return: a pointer to the memory allocated
 */

void *malloc_checked(unsigned int x)
{
	void *ptr;

	ptr = malloc(x);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
