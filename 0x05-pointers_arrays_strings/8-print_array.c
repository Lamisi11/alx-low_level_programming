#include "main.h"

/**
 * print_array - this function prints the elements of an array
 * (n number of elements)
 * @a: array
 * @n: number of elements in the array
 * Return: inputs
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
		if (i == (n - 1))
		{
			printf("%d", i[n - 1]);
		}
			printf("\n");
}
