#include <stdio.h>

/**
 * main - program entry point
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	for (letter = 'A'; letter <= 'Z'; letter++)
		puchar(letter);
	putchar('\n');
	return (0);
}

