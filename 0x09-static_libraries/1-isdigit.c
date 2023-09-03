#include "main.h"
/**
 * _isdigit - checking for digit
 * @c: character that is checked
 * Return: 1 if is digit or 0 for others
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
return (0);
}
