#include <stdio.h>
#include "main.h"

/**
 * main - print number of arguments to be passed
 * @argc: argument number
 * @argv: argument array
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
