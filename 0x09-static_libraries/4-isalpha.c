#include "main.h"
/**
 * _isalpha - This program checks for alphabelt
 * @c: character checked
 * Return: 1 if c is alphabelt or 0 for anything else
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'z'));
}
