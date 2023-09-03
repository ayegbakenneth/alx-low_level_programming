#include "main.h"
/**
 * _memcpy - this is to copies only memory locations
 * @dest: where its stored
 * @src: copying memory
 * @n: bytes
 * Return: the memory copied
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int b = n;

	for (; a < b; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
