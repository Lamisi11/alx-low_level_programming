#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - This program prints the alphabet in lowercase followed by a line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
	putchar (alp[i]);
	}
	putchar('\n');
	return (0);
}
