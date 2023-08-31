#include "main.h"
int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);
/**
 * is_palindrome - checking for palidrome string
 * @s: reverse string
 * Return: 1 for success or 0 not success
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}
/**
 * _strlen_recursion - Returning length of string
 * @s: String to calculate
 * Return: length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
/**
 * check_pal - checking for the character
 * @s: string checked
 * @i: counter
 * @len: length
 * Return: 1 if success 0r 0 if failed
 */
int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}
