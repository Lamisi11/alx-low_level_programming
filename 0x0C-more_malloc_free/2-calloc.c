#include <stdlib.h>
#include "main.h"

/**
 * *_memset - fills memory with data
 * @a: memory to be operated on
 * @b: char to be copied
 * @n: number of times to copy b
 * Return: pointer to the memory a
 */

char *_memset(char *a, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		a[x] = b;
	}

	return (a);
}

/**
 * *_calloc - uses the malloc function to allocate a
 * memory for an array
 * @nmemb: number of array elements
 * @size: size of array elements
 * Return: pointer to the memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
