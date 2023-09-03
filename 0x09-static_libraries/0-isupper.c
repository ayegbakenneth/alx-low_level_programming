#include "main.h"
/**
 * _isupper - checks for lower character
 * @c: This is the character to be checked
 * Return: 1 for uppercase or 0 for lower case
 */
int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
return (0);
}
