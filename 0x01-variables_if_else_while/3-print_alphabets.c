#include <stdio.h>
/**
 * main - program entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ar;

	for (ar = 'a'; ar <= 'z'; ar++)
		putchar(ar);
	for (ar = 'A'; ar <= 'Z'; ar++)
		puchar(ar);
	putchar('\n');
	return (0);
}

