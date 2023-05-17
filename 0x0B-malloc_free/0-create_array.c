#include "main.h"
#include <stdlib.h>

/**
 * create_array - function creates an array of size and assign a char c
 * @size:array size
 * @c:assigned char
 * Description: create array of size size and assign char c
 * Return: pointer to array, if fail, NULL
 *
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
