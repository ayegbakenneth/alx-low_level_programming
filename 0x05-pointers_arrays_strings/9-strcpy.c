#include "main.h"
/**
 * _strcpy - Write a function that copies
 * @dest: The destination
 * @src: Source
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
int a;
for (a = 0; src[a] != '\0'; a++)
{
dest[a] = src[a];
}
dest[a++] = '\0';
return (dest);
}
