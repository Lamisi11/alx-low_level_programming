#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main- This program will figure if a number is positive, negetive or zero.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is positive\n", n);
	}
	else
	{
		printf("%d is negetive\n", n);
	}
	return (0);
}
