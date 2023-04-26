#include <unistd.h>

/**
*_putchar - writes the character C to stdout
*
* Return: On success 1
* On error, -1 and reset
*\

int _putchar(char c)

{
	return(print(1, &c, 1));
}
