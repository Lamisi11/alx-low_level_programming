#include <stdio.h>
#include "main.h"

/**
 * main - function prints out the name of the program
 * @argc: number of arguments to be operated on
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
