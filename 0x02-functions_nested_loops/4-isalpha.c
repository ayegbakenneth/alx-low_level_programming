#include "main.h"
/**
 * _isapha - checks for alphabetic character
 * @c: This is the character that will be checked
 * Return: 1 which indicates alphabetic character or 0 for another thing
 */
int _isalpha(int c)
{
if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
{
return (1);
}
return (0);
}
