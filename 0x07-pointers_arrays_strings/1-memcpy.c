#include "main.h"

/**
 *_memcpy - this function copies a memory area.
 *@dest: memory which stores bytes
 *@src: memory which copies bytes
 *@n: number of bytes
 *
 *Return: copied memory with changed bytes
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int j = n;

	for (; i < j; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
