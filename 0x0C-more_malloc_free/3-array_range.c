#include <stdlib.h>
#include "main.h"

/**
 * *array_range - This function uses integers to create an array
 * @min: stored minimum range of values
 * @max: stored maximum range of elements and values
 * Return: pointer to the array
 */

int *array_range(int min, int max)
{
	int *ptr;
	int x, sum;

	if (min > max)
		return (NULL);

	sum = max - min + 1;

	ptr = malloc(sizeof(int) * sum);

	if (ptr == NULL)
		return (NULL);

	for (x = 0; min <= max; x++)
		ptr[x] = min++;

	return (ptr);
}
