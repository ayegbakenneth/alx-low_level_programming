#include "main.h"
#include <unistd.h>
/**
 * _putchar - Writing character c to stdout
 * @c: the input character
 * Return: 1
 * On error, -1 is returned.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
