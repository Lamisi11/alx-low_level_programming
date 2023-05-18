#include <stdio.h>
#include "main.h"

/**
 * _putchar - writes c to the stdout
 * @c: Character to be printed
 *
 * Return: On success 1.
 * On error, -1 is returned and errno is set appropriately.
 */

int _putchar(char c)

{
return (write(1, &c, 1));
}
