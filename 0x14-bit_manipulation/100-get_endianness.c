#include "main.h"
/**
 * get_endianness - to check the bit storage order
 * Return: 0 if big endian or 1 if small endian
 */
int get_endianness(void)
{
	int ella;
	char *b;

	ella = 1;
	b = (char *)&ella;
	return (*b);
}
