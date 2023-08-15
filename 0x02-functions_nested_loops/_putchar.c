#include "main.h"
#include <unistd.h>
/**
 * _putcher - stdout the character c
 * @c: character to print
 *
 * Return: if successful 1.
 * error, -1 returned, error then fix accordingly.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
