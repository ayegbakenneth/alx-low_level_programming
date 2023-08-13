#include <stdio.h>

/**
 * main - the program starting point
 *
 *Description: printing alphabet in lowercase
 *
 *Return: Always 0 (success)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	putchar(letter);
	putchar('\n');
	return (0);
}
