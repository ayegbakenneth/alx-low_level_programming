#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char number;

	for (number = '0'; number <= 'f'; number++)
		putchar(number);
	for (number = 'a'; number <= 'f'; number++)
		putchar(number);
	putchar('\n');
	return (0);
}
