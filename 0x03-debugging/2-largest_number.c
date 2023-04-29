#include <stdio.h>
#include "main.h"

/**
* Largest integer - prints the largest integer among 3 others
* a: first integer
* b: second integer
* c: third integer
* Return: Largest integer
*/
int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
	{
		largest = a;
	}
	else if (a > b && c > a)
	{
		largest = c;
	}
	else if (b > c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}
return (largest);
}
